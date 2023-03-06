#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "test.h"

#define STR(x) #x

#define HIGH 0x1
#define LOW 0x0

in_t in ={
    .mask[0] = HIGH,
    .mask[1] = ~HIGH
};

out_t out={
    .mask[0] = LOW,
    .mask[1] = ~LOW
};

int main(int argc, char *argv[])
{
    test_t test_nums;
    in_t in;
    out_t out;

    int test_arr[6];

    int nums[] = {One, Two, Three, Four, Five};

    //char *dir_name = "tmp";
    char *file_name = "crib_checkout.txt";

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
    
    in = get_in_status();
    out = get_out_status();

    if (!test_status(in.mask[0]))
    {
        printf("Here1\n");
    }

    if (!test_status(in.mask[1]))
    {
        printf("Here2\n");
    }

    printf("Hello world 1\n");
    printf("Hello world 2\n");
    printf("Hello world 3\n");

    //fclose(fptr);
    return 0;
}

int start_test(int argc, char *argv[])
{
    printf("Argc: %d\n", argc);
    printf("The argument supplied is %s\n", argv[1]);

    return 1;
}

bool test_months(months_t months)
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

in_t get_in_status(void)
{
    return in;
}

out_t get_out_status(void)
{
    return out;
}

bool test_status(int val)
{
    bool result = false;

    if(val == HIGH)
    {
        printf("ON\n");
        result = false;
    }
    else
    {
        printf("OFF\n");
        result = false;
    }

    return result;
}