#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int taman = 8;
    int nums[taman];

    for(int c = 0; c < taman; c++)
    {
        nums[c] = c;
    }

    for(int c = 0; c < taman; c++)
    {
        printf("%i\n", nums[c]);
    }
}
