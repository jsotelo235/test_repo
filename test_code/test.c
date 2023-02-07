#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "test.h"

typedef struct week_s{

    char *monday;
    char *tuesday;
    char *wednesday;
    char *thursday;
    char *friday;

}week_t;

typedef enum months_e {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} months_t;

week_t day = {
    .monday = "Monday", 
    .tuesday = "Tuesday", 
    .wednesday = "Wednesday", 
    .thursday = "Thursday", 
    .friday = "Friday"
};

const char *const test_to_str[] = {
    [One] = "One",
    [Two] = "Two",
    [Three] = "Three",
    [Four] = "Four",
    [Five] = "Five"
};

const char *const months_to_str[] = {
    [JAN] = "January",
    [FEB] = "February",
    [MAR] = "March",
    [APR] = "April",
    [MAY] = "May",
    [JUN] = "June",
    [JUL] = "JULY",
    [AUG] = "August",
    [SEP] = "September",
    [OCT] = "October",
    [NOV] = "November",
    [DEC] = "December"};

typedef struct user_filter_s{
    int months;
}user_filter_t;

user_filter_t filter={
    .months = JAN
};

static bool test_months(months_t months);

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

    printf("\n");

    for(months_t months = JAN; months < DEC; months++)
    {
        if(!test_months(months))
        {
            break;
        }
        else{
            printf("Month: %s\n", months_to_str[months]);
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

static bool test_months(months_t months)
{
    bool result = false;

    for(months_t months = JAN; months < DEC; months++)
    {
        filter.months = months;

        if(months != filter.months)
        {
            printf("Months 2: %s\n", months_to_str[filter.months]);
            result = false;
        }
        else
        {
            return true;
        }
    }

    return result;
}