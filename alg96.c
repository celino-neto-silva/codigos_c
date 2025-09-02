#include<stdio.h>

int main(void)
{
    int taman = 10;
    int nums[taman];

    for(int c = 0; c < taman; c++)
    {
        if(c % 2 == 0)
        {
            nums[c] = 5;
        }
        else
        {
            nums[c] = 3;
        }
        printf("%i\n", nums[c]);
    }
}
