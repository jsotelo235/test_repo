#include <stdio.h>
#include <stdlib.h>
#include "test.h"


typedef struct week_s{

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

const char *const test_to_str[] = {

    [One] = "One",
    [Two] = "Two",
    [Three] = "Three",
    [Four] = "Four",
    [Five] = "Five"
};

int main(int argc, char *argv[])
{
    test_t test_nums;
    int test_arr[6];

    int nums[] = {One, Two, Three, Four, Five};

    //char *dir_name = "tmp";
    char *file_name = "crib_checkout.txt";

    for(int i = 0; i < 6; i++)
    {
        test_nums = nums[i];

        printf("Nums: %d\n", test_nums);
    }

    printf("\nStrings...\n\n");
    
    for(int i = 0; i < 5; i++)
    {
        test_nums = i;
        test_arr[i] = test_nums;
        
        if(test_to_str[test_arr[i]] == "One")
        {
            printf("\033[1;30;42m Passed \033[0m\n");
            //fprintf(fptr, "Result: %s\n", "Passed");
        }
        else
        {
            printf("\033[1;37;41m Failed \033[0m\n");
            //fprintf(fptr, "Result: %s\n", "Failed");
        }
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
    
    //fclose(fptr);
    return 0;
}

int start_test(int argc, char *argv[])
{
    printf("Argc: %d\n", argc);
    printf("The argument supplied is %s\n", argv[1]);

    return 1;
}