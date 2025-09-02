// Vamos iniciar aplicando ponteiros em numeros inteiros
#include<stdio.h>

int main(void)
{
    int n = 25;
    int *p = &n;

    printf("Endereço de N: %p\n", &n);
    printf("Valor armazenado por N: %i\n", n);
    printf("-------------------------------\n");
    printf("Endereço apontado por P: %p\n", p);
    printf("Valor no endereço apontado por P: %i\n", *p);
    printf("-------------------------------\n");
    printf("Endereço de P: %p\n", &p);
    //Ou seja, nós podemos ver através dos ponteiros:
    //1º: Endereço que o ponteiro guarda
    //2º: Valor que o endereço guardado pelo ponteiro guarda
    //3º: Endereço do ponteiro
}
