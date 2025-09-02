#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string a = "Francisco";

    float altura_a = 1.50;
    float altura_a_cm = altura_a * 100;

    string b = "Sara";
    float altura_b = 1.10;
    float altura_b_cm = altura_b * 100;

    const int taxa_a = 2;
    const int taxa_b = 3;

    bool maior = false;
    int cont = 0;

    do
    {
        altura_a_cm = altura_a_cm + taxa_a;
        altura_b_cm = altura_b_cm + taxa_b;
        cont = cont + 1;
        if(altura_b_cm > altura_a_cm)
        {
            maior = true;
        }
    }
    while(maior == false);

    printf("Altura de %s: %fm - Taxa de Crescimento Anual: %i\n",a,altura_a,taxa_a);
    printf("Altura de %s: %fm - Taxa de Crescimento Anual: %i\n",b,altura_b,taxa_b);
    printf("%s vai ultrapassar a altura de %s em %i anos\n",b,a,cont);
}
