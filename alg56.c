#include<stdio.h>
#include<cs50.h>

int main(void)
{
    printf("[1] Luxo\n");
    printf("[2] Popular\n");
    int carro = get_int("->Opção: ");

    int kms = get_int("->Kilometragem: ");
    int dias = get_int("->Dias alugados: ");

    float preco_final = 0;
    if(carro == 1)
    {
        preco_final = dias * 150;
        if(kms > 200)
        {
            preco_final = preco_final + (kms * 0.25);
        }
        else
        {
            preco_final = preco_final + (kms * 0.30);
        }
    }
    else
    {
        preco_final = dias * 90;
        if(kms > 200)
        {
            preco_final = preco_final + (kms * 0.10);
        }
        else
        {
            preco_final = preco_final + (kms * 0.20);
        }
    }
    printf("->Valor total a pagar: %.2f €\n", preco_final);
}
