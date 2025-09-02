#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n1 = get_int("Nº 1: ");
    int n2 = get_int("Nº 2: ");

    if(n1 > n2)
    {
        printf("%i é maior!", n1);
    }
    else if(n1 == n2)
    {
        printf("%i e %i é igual!",n1,n2);
    }
    else
    {
        printf("É menor\n");
    }
}
