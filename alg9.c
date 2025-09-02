#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float altura = get_float("->Altura: ");
    float peso = get_float("->Peso: ");

    float imc = peso/pow(altura,2);

    if(imc < 18.5)
    {
       printf("IMC: %.2f\n",imc);
       printf("Abaixo do Peso\n");
       return 0;
    }
    else if(imc >= 18.5 && imc < 25)
    {
       printf("IMC: %.2f\n",imc);
       printf("Peso Ideal\n");
       return 0;
    }
    else
    {
       printf("IMC: %.2f\n",imc);
       printf("Fora do Peso Ideal\n");
       return 0;
    }
}
