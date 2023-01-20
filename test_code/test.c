#include <stdio.h>


typedef enum test_e{
    One,
    Two,
    Three,
    Four,
    Five
}test_t;

typedef struct week_t{

    char *monday;
    char *tuesday;
    char *wednesday;
    char *thursday;
    char *friday;

}week_t;

week_t day = {.monday    = "Monday",
              .tuesday   = "Tuesday",
              .wednesday = "Wednesday",
              .thursday  = "Thursday",
              .friday    = "Friday"}; 

static int start_test(int argc, char *argv[]);

int main(int argc, char *argv[])
{
    int nums[] = {One, Two, Three, Four, Five};

    printf("Day: %s\n", day.monday);

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