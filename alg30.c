#include<stdio.h>

int main(void)
{
    int num = 0;

    printf("Informe Nº: ");
    scanf("%i", &num);

    printf("->O Nº: %i\n", num);
    printf("->O antecessor: %i\n", num - 1);
    printf("->O sucessor: %i\n", num + 1);

    return 0;
}
