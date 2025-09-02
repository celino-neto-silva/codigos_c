#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int taman = 7;
    int nums[taman];

    srand(time(NULL));

    int num = 0;

    for(int i = 0; i < taman; i++)
    {
        num = rand() % 100;
        nums[i] = num;
    }

    for(int i = 0; i < taman; i++)
    {
        printf("%i\n", nums[i]);
    }
}
