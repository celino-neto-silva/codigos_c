#include<stdio.h>
#include<cs50.h>

void exibir(int n)
{
    printf("%i\n",n);
}

int somar(int n1, int n2)
{
    int s = n1+n2;
    return s;
}

int main(void)
{
    exibir(somar(1,2));
}
