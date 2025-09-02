#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int nums[20];
    int num = 0;
    for(int i = 0; i < 20; i++)
    {
        nums[i] = 0;
    }

    srand(time(NULL));

    for(int i = 0; i < 20; i++)
    {
        num = 1 + (rand() % 10);
        nums[i] = num;
    }
    system("clear");
    printf("------------------------------------------\n");
    //1ª Saída: Mostrar os 20 números sorteados
    for(int i = 0; i < 20; i++)
    {
        printf("%i ",nums[i]);
    }
    //2ª Saída: Mostrar quantos números são divisiveis por 3
    int div_3 = 0;

    for(int i = 0; i < 20; i++)
    {
        if(nums[i] % 3 == 0)
        {
            div_3 = div_3 + 1;
        }
    }
    printf("\n");
    printf("Divisíveis por 3: %i\n",div_3);
    //3ª Saída: Mostrar quantos números são maiores que 5
    int maior_5 = 0;
    for(int i = 0; i < 20; i++)
    {
        if(nums[i] > 5)
        {
            maior_5 = maior_5 + 1;
        }
    }
    printf("\n");
    printf("Maiores que 5: %i\n",maior_5);
}
