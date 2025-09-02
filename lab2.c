//Vamos iniciar aplicando ponteiros para strings
#include<stdio.h>

int main(void)
{
    char *s = "hi!";
    printf("Endereço que S está a guardar, (vai ser sempre o endereço do 1º elemento): %p\n", &s[0]);
    printf("Valor que o endereço de S guarda: %c\n", *s);// Vai imprimir só o h porque o deferenciador está apontando para o endereço do 1ºelemento
    printf("Valor que o endereço de S guarda na sua totalidade: %s\n", s);
    printf("Endereço de S: %p\n", &s);
}
