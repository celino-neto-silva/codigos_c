#include<stdio.h>
#include<cs50.h>

float r1, r2, r3 = 0;
int main(void)
{
    r1 = get_float("Reta 1: ");
    r2 = get_float("Reta 2: ");
    r3 = get_float("Reta 3: ");

    if(r1 > (r2 + r3) || r2 > (r1 + r3) || r3 > (r1 + r2))
    {
        printf("Inválido!\n");
        return 1;
    }
    else
    {
        if(r1 == r2 && r2 == r3)
        {
            printf("Equilátero!\n");
        }
        else if(r1 == r2 || r2 == r3 || r3 == r1)
        {
            printf("Isósceles!\n");
        }
        else
        {
            printf("Escaleno!\n");
        }
    }
}
