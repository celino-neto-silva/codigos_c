#include<stdio.h>
#include<cs50.h>

void fibonacci(int qtd);

int main(void)
{
    int qtd = get_int("Qtd: ");
    fibonacci(qtd);
}

void fibonacci(int qtd)
{
    int fib1 = 0;
    int fib2 = 1;
    int fib3 = 0;

    for(int c = 0; c < qtd; c++)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        printf("%i ",fib2);
    }
}
