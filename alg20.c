#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int num = -1;

    while(true)
    {
        printf("Digite 0 para encerrar!\n");

        num = get_int("Digite um número: ");

        if(num == 0)
        {
            break;
        }

        for(int c = 1; c <= 10; c++)
        {
            printf("%i X %i = %i\n",num,c,num*c);
        }
    }
}
