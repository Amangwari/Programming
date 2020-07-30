// Example program to demonstrate continue statement
#include <stdio.h>

int main()
{
    /* Variable declaration */
    int num;

    printf("Even numbers between 1 to 100: \n");

    for(num=1; num<=100; num++)
    {
        /*
         * If num is odd then
         * skip rest loop body and
         * continue to next iteration
         */
        if(num % 2 == 1)
            continue;

        /* Print even number */
        printf("%d ", num);
    }

    return 0;
}