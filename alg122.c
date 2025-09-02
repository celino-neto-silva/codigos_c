#include<stdio.h>
#include<cs50.h>

float media(float nota1, float nota2);
string status(float media_final);

int main(void)
{
    float nota1 = get_float("1ª Nota: ");
    float nota2 = get_float("2ª Nota: ");

    float media_final = media(nota1, nota2);

    string status_final = status(media_final);

    printf("Media final: %.2f\n",media_final);
    printf("Status: %s\n", status_final);
}

float media(float nota1, float nota2)
{
    float m = 0;

    m = (nota1 + nota2) / 2;

    return m;
}

string status(float media_final)
{
    string s;

    if(media_final >= 10)
    {
        s = "Aprovado";
    }
    else
    {
        s = "Reprovado";
    }

    return s;
}
