#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(void)
{
    char resp;
    int num = 0;

    while(true)
    {
        printf("Digite um nº: ");
        scanf("%i", &num);

        printf("Continuar? [S / N]: ");
        scanf("%c", &resp);

        if(resp == 'N' || resp == 'n')
        {
            break;
        }
    }
}
