#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int fib1 = 0;
    int fib2 = 1;
    int fib3 = 0;

    for(int c = 0; c < 10; c++)
    {
        printf("%i\n", fib2);
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
}
