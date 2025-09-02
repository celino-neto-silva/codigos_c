#include<stdio.h>

int main(void)
{
    int taman = 10;
    int cont = 5;
    int nums[taman];

    for(int c = 0; c < taman; c++)
    {
        nums[c] = cont;
        cont = cont + 5;
    }

    for(int c = 0; c < taman; c++)
    {
        printf("%i\n", nums[c]);
    }
}
