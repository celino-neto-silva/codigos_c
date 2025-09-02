#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cs50.h>

int main(void)
{
    srand(time(NULL));

    int num = 1 + rand() % 10;
    int n = 0;
    int c = 0;

    for(;;)
    {
        c = c + 1;

        n = get_int("Nº entre 1 e 10: ");
        if(n == num)
        {
            printf("Acertou! O Nº é: %i\n", n);
            break;
        }

        if(c == 4)
        {
            printf("Não Acertaste!\n");
            break;
        }
    }
}
