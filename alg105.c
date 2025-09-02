#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int taman = 10;
    int nums[taman];

    srand(time(NULL));

    for(int c = 0; c < taman; c++)
    {
        nums[c] = rand()%99;
    }

    for(int c = 0; c < taman; c++)
    {
        printf("%i\n", nums[c]);
    }
    printf("-----------------------------------\n");
    int aux = 0;
    for(int c = 0; c < taman - 1; c++)
    {
        for(int c1 = c + 1; c1 < taman; c1++)
        {
            if(nums[c1] < nums[c])
            {
                aux = nums[c];
                nums[c] = nums[c1];
                nums[c1] = aux;
            }
        }
    }

    for(int c = 0; c < taman; c++)
    {
        printf("%i\n", nums[c]);
    }
}
