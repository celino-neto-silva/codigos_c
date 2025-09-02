#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<time.h>

int main(void)
{
    int taman = 30;
    int nums[taman];
    int n = 0;
    int qtd_n = 0;
    char resp;

    srand(time(NULL));

    for(int c = 0; c < taman; c++)
    {
        nums[c] = 1 + rand() % 15;
    }

    while(true)
    {
        n = get_int("Digite um número entre 1 e 15: ");
        for(int c = 0; c < taman; c++)
        {
            if(nums[c] == n)
            {
                printf("%i está na posição: %i\n", n, c);
                qtd_n = qtd_n + 1;
            }
        }
        printf("%i foi contado %i vezes\n",n,qtd_n);

        resp = get_char("Continuar [S / N]?: ");
        if(resp == 'N')
        {
            break;
        }
        else
        {
            n = 0;
            qtd_n = 0;
        }
    }
}
