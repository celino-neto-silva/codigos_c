#include<stdio.h>
#include<cs50.h>

void contador(int n1, int n2, int n3);

int main(void)
{
    int n1,n2,n3 = 0;

    n1 = get_int("Inicio: ");
    n2 = get_int("Fim: ");
    n3 = get_int("Passo: ");

    contador(n1, n2, n3);
}

void contador(int n1, int n2, int n3)
{
    for(int c = n1; c < n2; c = c + n3)
    {
        printf("%i\n",c);
    }
}
