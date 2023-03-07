#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "colors.h"

void print_color(const char *color_code, const char *format, ...) 
{

    if (isatty(STDOUT_FILENO))
    {
        va_list args;
        va_start(args, format);
        printf("%s", color_code);
        vprintf(format, args);
        printf(RESET);
        va_end(args);
        fflush(stdout);
    }
    else 
    {
        va_list args;
        va_start(args, format);
        vprintf(format, args);
        va_end(args);
        fflush(stdout);
    }
}
