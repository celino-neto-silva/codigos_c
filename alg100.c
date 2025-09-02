#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int taman = 15;
    int nums[taman];

    for(int c = 0; c < taman; c++)
    {
        nums[c] = get_int("%iº numero: ",c+1);
    }

    for(int c = 0; c < taman; c++)
    {
        if(nums[c] % 10 == 0)
        {
            printf("Posição de um múltiplo de 10: %i\n",c);
        }
    }
}
