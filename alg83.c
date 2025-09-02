#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int cont = 0;
    do
    {
        printf("%i\n", cont);
        cont = cont + 3;
    }
    while(cont <= 30);
}
