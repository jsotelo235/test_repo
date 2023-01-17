#include <stdio.h>


typedef enum test_e{
    One,
    Two,
    Three,
    Four,
    Five
}test_t;

static int start_test(int argc, char *argv[]);

int main(int argc, char *argv[])
{
    int nums[] = {One, Two, Three, Four, Five};

    if( argc == 2 ) {
        
        if(start_test(argc, argv) == 1){
            printf("Hello World!\n");
        }

    }
    else if( argc > 2 ) {
        printf("Too many arguments supplied.\n");
    }
    else {
        printf("One argument expected.\n");
    }
    
    return 0;
}

int start_test(int argc, char *argv[])
{
    printf("Argc: %d\n", argc);
    printf("The argument supplied is %s\n", argv[1]);

    return 1;
}