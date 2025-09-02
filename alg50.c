#include<stdio.h>
#include<cs50.h>

float larg,comp,area = 0;

int main(void)
{
    larg = get_float("Largura (m): ");
    comp = get_float("Comprimento (m): ");

    area = larg * comp;

    printf("Área: %.2f metros quadrados\n", area);

    if(area > 500)
    {
        printf("VIP\n");
    }
    else if(area >= 100 && area <= 500)
    {
        printf("MASTER\n");
    }
    else
    {
        printf("POPULAR\n");
    }
}
