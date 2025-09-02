#include<stdio.h>

int main(void)
{
    int n = 0;

    printf("Nº: ");
    scanf("%i", &n);

    for(int c = 0; c < 10; c++)
    {
        printf("%i X %i = %i\n", n, c+1, n*(c+1));
    }
}
