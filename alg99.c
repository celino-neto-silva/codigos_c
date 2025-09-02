#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int taman = 7;
    string nomes[taman];

    for(int i = 0; i < taman; i++)
    {
        nomes[i] = get_string("%iº Nome: ", i+1);
    }

    for(int i = taman; i >= 0; i--)
    {
        printf("%i Nome: %s\n", i, nomes[i]);
    }
}
