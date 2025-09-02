#include<stdio.h>
#include<cs50.h>

int main(void)
{
    printf("[1] - Pedra\n");
    printf("[2] - Tesoura\n");
    printf("[3] - Papel\n");

    int jog1 = get_int("Jogada 1: ");
    int jog2 = get_int("Jogada 2: ");

    if((jog1 == 1 && jog2 == 3) || (jog1 == 3 && jog2 == 1))
    {
        printf("Papel venceu Pedra\n");
    }
    else if((jog1 == 2 && jog2 == 3) || (jog1 == 3 && jog2 == 2))
    {
        printf("Tesoura venceu Papel\n");
    }
    else if((jog1 == 1 && jog2 == 2) || (jog1 == 2 && jog2 == 1))
    {
        printf("Pedra venceu Tesoura\n");
    }
    else
    {
        printf("Empate\n");
    }
}
