#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int num = get_float("Nº: ");

    if(num < 0)
    {
        printf("Inválido!\n");
        do
        {
            num = get_float("Nº: ");
        }
        while(num < 0);
    }

    for(int i = 1; i <= num; i++)
    {
        printf("%i\n", i);
    }
}
