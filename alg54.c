#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<time.h>

int main(void)
{
    srand(time(NULL));

    int num = (rand() % 5) + 1;
    int n = 0;
    int maior, menor = 0;

    while(n != num)
    {
        n = get_int("Informe um numero: ");
        if(n == num)
        {
            printf("Acertou! Nº = %i\n", n);
        }
    }
}

