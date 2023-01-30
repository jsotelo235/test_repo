#include <stdio.h>
#include "test.h"


const char *const test_to_str[] = {

    [One] = "One",
    [Two] = "Two",
    [Three] = "Three",
    [Four] = "Four",
    [Five] = "Five"
};


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



int main(int argc, char *argv[])
{
    test_t test_nums;
    int test_arr[6];

    int nums[] = {One, Two, Three, Four, Five};


    for(int i = 0; i < 5; i++)
    {
        test_nums = nums[i];

        printf("Nums: %d\n", test_nums);
    }

    printf("\nStrings...\n\n");
    
    for(int i = 0; i < 5; i++)
    {
        test_nums = i;
        test_arr[i] = test_nums;
        printf("Nums: %s\n\n", test_to_str[test_arr[i]]);
    }

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