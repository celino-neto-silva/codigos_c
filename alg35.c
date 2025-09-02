#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    a = get_int("Valor de A: ");

    if(a == 0)
    {
        do
        {
            printf("Informe um valor diferente de 0");
            a = get_int("Valor de A: ");
        }
        while(a == 0);
    }

    b = get_int("Valor de B: ");
    c = get_int("Valor de C: ");

    int delta = (b*b) - 4 * a * c;

    printf("O Valor de Delta é: %i\n",delta);
}
