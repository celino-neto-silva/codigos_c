#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int taman = 5;

    string nomes[taman];
    int idades[taman];

    for(int c = 0; c < taman; c++)
    {
        nomes[c] = get_string("%iº - Nome: ",c+1);
        idades[c] = get_int("%iª - Idade: ",c+1);
    }

    for(int c = 0; c < taman; c++)
    {
        if(idades[c] < 18)
        {
            printf("Nome: %s\n", nomes[c]);
            printf("Idade: %i\n", idades[c]);
        }
    }

}
