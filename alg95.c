#include<stdio.h>

int main(void)
{
    int taman = 10;
    int nums[taman];

    for(int c = 0; c < taman; c++)
    {
        nums[c] = taman - c-1;
    }

    for(int c = 0; c < taman; c++)
    {
        printf("%i\n", nums[c]);
    }
}
