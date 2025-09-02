#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int taman = 10;
    int nums[taman];

    for(int c = 0; c < taman; c++)
    {
        nums[c] = get_int("%iº numero: ",c+1);
    }

    for(int c = 0; c < taman; c++)
    {
        if(nums[c] % 2 == 0)
        {
            printf("Posição %i - nº: %i\n", c,nums[c]);
        }
    }
}
