#include<stdio.h>

int main(void)
{
    float num = 0;

    printf("Informe Nº: ");
    scanf("%f", &num);

    float dobro = num * 2;
    float terca_parte = num / 3;

    printf("->%f\n", num);
    printf("->Dobro = %f\n", dobro);
    printf("->1 / 3 = %f\n", terca_parte);
}
