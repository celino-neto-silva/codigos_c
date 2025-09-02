#include<stdio.h>
#include<cs50.h>

int maior(int nums[]);

int main(void)
{
    int nums[3];
    
    for(int c = 0; c < 3; c++)
    {
        nums[c] = get_int("%iº Nº: ",c+1);
    }

    int maior_num = maior(nums);

    printf("O maior nº é: %i\n", maior_num);
}

int maior(int nums[])
{
    int m = 0;

    for(int c = 0; c < 3; c++)
    {
        if(c == 0)
        {
            m = nums[c];
        }

        if(nums[c] > m)
        {
            m = nums[c];
        }
    }

    return m;
}
