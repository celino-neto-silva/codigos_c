#include<stdio.h>

int main(void)
{
    int taman = 15;
    int nums[taman];

    int fib1 = 0;
    int fib2 = 1;
    int fib3 = 0;

    for(int c = 0; c < taman; c++)
    {
        nums[c] = fib2;
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;

        printf("%iº Termo: %i\n",c+1,nums[c]);
    }
}
