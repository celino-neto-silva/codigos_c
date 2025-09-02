#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n = 0;

    n = get_int("Nº: ");

    for(int i = 0; i <= n; i++)
    {
        printf("%i ", i);
    }
}
