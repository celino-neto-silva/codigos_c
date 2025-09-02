#include<stdio.h>

int main(void)
{
    float nota1 = 0;
    printf("1ª Nota: ");
    scanf("%f", &nota1);

    if(nota1 < 0 || nota1 > 20)
    {
        do
        {
            printf("->Inserir valores positivos e menores iguais a 20\n");
            printf("1ª Nota: ");
            scanf("%f", &nota1);
        }
        while(nota1 < 0 || nota1 > 20);
    }

    float nota2 = 0;
    printf("2ª Nota: ");
    scanf("%f", &nota2);

    if(nota2 < 0 || nota2 > 20)
    {
        do
        {
            printf("->Inserir valores positivos e menores iguais a 20\n");
            printf("2ª Nota: ");
            scanf("%f", &nota2);
        }
        while(nota2 < 0 || nota2 > 20);
    }

    float media = (nota1 + nota2) / 2;

    printf("------------ MÉDIA FINAL ------------\n");
    printf("Média Final igual a %2.f\n",media);
    return 0;
}
