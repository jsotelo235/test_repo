#ifndef COLORS_H
#define COLORS_H


// Define color escape codes
#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// Function declarations
void print_color(const char *color_code, const char *message);

#endif /* COLORS_H */
