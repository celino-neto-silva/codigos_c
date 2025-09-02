#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float a,b,c = 0;

    a = get_float("Lado A:\n");
    b = get_float("Lado B:\n");
    c = get_float("Lado C:\n");

    if(a > b + c || b > a + c || c > a + b)
    {
        printf("Inválido\n");
    }

    if(a == b && b == c)
    {
        printf("Equilátero!\n");
    }
    else if(a == b || a == c || b == c)
    {
        printf("Isósceles!\n");
    }
    else
    {
        printf("Escaleno!\n");
    }
}
