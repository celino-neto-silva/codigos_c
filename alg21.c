#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cs50.h>

int main(void)
{
    srand(time(NULL));

    char resp = 'S';
    int num = 0;

    while(resp == 'S')
    {
        printf("Gerando um número aletório....\n");
        num = rand()%100;
        printf("O número agora é: %i\n",num);
        resp = get_char("Continuar [S / N]?:");
        system("clear");
    }
}
