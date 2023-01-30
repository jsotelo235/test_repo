#include <stdio.h>

typedef enum test_e{
    One,
    Two,
    Three,
    Four,
    Five
}test_t;

extern const char *const test_to_str[];
static int start_test(int argc, char *argv[]);