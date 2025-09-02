#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *a = malloc(sizeof(int));
    if(a == NULL)
    {
        return 1;
    }
    printf("Indique o valor de A: ");
    scanf("%i", a);

    int *b = malloc(sizeof(int));
    if(b == NULL)
    {
        return 1;
    }
    printf("Indique o valor de B: ");
    scanf("%i", b);

    printf("[A] vale: %i\n",*a);
    printf("[B] vale: %i\n", *b);

    int *c = malloc(sizeof(int));
    if(c == NULL)
    {
        return 1;
    }
    c = a;
    a = b;
    b = c;

    printf("[A] agora vale: %i\n",*a);
    printf("[B] agora vale: %i\n", *b);

    free(a);
    free(b);

    return 0;
}
