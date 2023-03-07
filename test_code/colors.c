#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "colors.h"

void printf_color(const char *color_code, const char *format, ...) 
{
    va_list args;
    va_start(args, format);
    
    if (isatty(STDOUT_FILENO)) 
    {
        printf("%s", color_code);
    }

    vprintf(format, args);
    
    if (isatty(STDOUT_FILENO)) 
    {
        printf(RESET);
    }
    
    va_end(args);
    fflush(stdout);

}
