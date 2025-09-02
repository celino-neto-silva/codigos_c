#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

int main(void)
{
//1ª Fase: INSERÇÃO
    int nums[3];
    nums[0] = get_int("->Nº: ");
//2ª Fase: VALIDAÇÃO
    for(int c = 1; c < 3; c++)
    {
        nums[c] = get_int("->Nº: ");
        for(int i = c-1; i < c; i++)
        {
            if(nums[c] == nums[i])
            {
                printf("Igual\n");
                do
                {
                    nums[c] = get_int("->Nº: ");
                }
                while(nums[c]==nums[i]);
            }
        }
    }
//3ª Fase: ORDENAÇÃO
    int aux = 0;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 1; j < 3; j++)
        {
            if(nums[j] < nums[i])
            {
                aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
        }
    }
//4ª Fase: EXIBIÇÃO
    for(int c = 2; c >= 0; c--)
    {
        printf("%i ",nums[c]);
    }
    printf("\n");
}
