#include <stdio.h>
#include "test.h"



int main(int argc, char *argv[])
{
    test_t test_nums;

    int nums[] = {One, Two, Three, Four, Five};

    for(int i = 0; i < 5; i++)
    {
        test_nums = nums[i];

        printf("Nums: %d\n", test_nums);
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