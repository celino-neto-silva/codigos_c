#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    printf("Exibir os endereços guardados pelos ponteiros\n");
    printf("----------------------------------------------\n");

    printf("S: %p\n", s);
    printf("T: %p\n", t);

    printf("\n");
    printf("Exibir os endereços dos ponteiros\n");
    printf("----------------------------------------------\n");

    printf("S: %p\n", &s);
    printf("T: %p\n", &t);

    printf("\n");
    printf("Exibir os valores que cada endereço nos ponteiros guarda, (na totalidade)\n");
    printf("----------------------------------------------\n");

    printf("S: %s\n", s);
    printf("T: %s\n", t);
}
