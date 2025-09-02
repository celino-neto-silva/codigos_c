#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int base, expo = 0;
    do
    {
        base = get_int("Base: ");
        expo = get_int("Expoente: ");
        system("clear");
        printf("->%f\n", pow(base, expo));
    }
    while(base != -1 && expo != -1);
}
