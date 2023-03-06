#include <stdio.h>
#include <unistd.h>
#include "colors.h"

void print_color(const char *color_code, const char *message) {

    if (isatty(fileno(stdout)))
    {
        printf("%s%s%s", color_code, message, RESET);
    } 
    else 
    {
        printf("%s", message);
    }
}
