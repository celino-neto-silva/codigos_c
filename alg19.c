#include<stdio.h>

int main(void)
{
    int cont = 1;
    while(cont <= 3)
    {
        for(int c = 1; c <= 10; c++)
        {
            printf("%i X %i = %i\n",cont,c,cont*c);
        }
        printf("------------------------\n");
        cont = cont + 1;
    }
}
