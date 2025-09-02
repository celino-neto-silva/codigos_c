#include<stdio.h>
#include<stdlib.h>

typedef struct elemento
{
    int num;
    struct elemento *prox;
}
elemento;

typedef struct fila
{
    struct elemento *inicio;
    struct elemento *fim;
}
fila;

int ID = 0;
int FILA_MAIOR = 0;
elemento *aux;

fila *criar_fila()
{
    fila *f = (fila*) malloc(sizeof(fila));
    if(f == NULL)
    {
        printf("Unexpected error occurred!\n");
        return NULL;
    }
    else
    {
        f->inicio = NULL;
        f->fim = NULL;
    }
    return f;
}

void preencher_fila(fila *f)
{
    char continuar = 'S';
    ID = ID + 1;

    do
    {
        elemento *novo = (elemento*) malloc(sizeof(elemento));
        if(novo == NULL)
        {
            printf("Unexpected error occurred!\n");
            exit(1);
        }
        else
        {
            printf("Digite um nº: ");
            scanf(" %i",&novo->num);
            novo->prox = NULL;

            if(f->inicio == NULL)
            {
                f->inicio = novo;
                f->fim = novo;
            }
            else
            {
                f->fim->prox = novo;
                f->fim = novo;
            }
            printf("Continuar? [S / N]: ");
            scanf(" %c", &continuar);
        }
    }
    while(continuar == 'S' || continuar == 's');

    printf("\n");
    printf(">>>>>> Fila %i recolhida!\n", ID);
}

int contar(fila *f)
{
    int cont = 0;
    aux = f->inicio;

    do
    {
        cont = cont + 1;
        aux = aux->prox;
    }
    while(aux != NULL);

    return cont;
}

void maior_fila(fila *f1, fila *f2)
{
    int tam_1 = 0, tam_2 = 0;

    tam_1 = contar(f1);
    tam_2 = contar(f2);

    printf("\n");

    if(tam_1 == tam_2)
    {
        printf("Iguais!\n");
    }
    else if(tam_1 > tam_2)
    {
        ID = ID + 1;
        printf("Fila %i é maior com %i elementos\n", ID, tam_1);
    }
    else
    {
        ID = ID + 2;
        printf("Fila %i é maior com %i elementos\n", ID, tam_2);
    }
}

void calculos(fila *f)
{
    int cont = 0;
    int maior = 0;
    float soma = 0;
    float media = 0;

    ID = ID + 1;
    aux = f->inicio;

    printf("\n");
    printf(">>>>>>> Fila %i\n", ID);

    do
    {
        printf("%i\n", aux->num);

        if(cont == 0)
        {
            maior = aux->num;
        }
        else if(aux->num > maior)
        {
            maior = aux->num;
        }

        cont = cont + 1;
        soma = soma + cont;
        aux = aux->prox;
    }
    while(aux != NULL);

    media = soma / cont;

    printf("Estatísticas: \n");
    printf("->Qtd: %i\n", cont);
    printf("->Maior nº: %i\n", maior);
    printf("->Média: %f\n", media);
}

void impares(fila *f)
{
    ID = ID + 1;
    aux = f->inicio;
    printf("\n");
    printf(">>>>> Ímpares da Fila %i\n", ID);
    do
    {
        if(aux->num % 2 == 1)
        {
            printf("%i\n", aux->num);
        }
        aux = aux->prox;
    }
    while(aux != NULL);
}

void pares(fila *f)
{
    ID = ID + 1;
    aux = f->inicio;

    printf("\n");
    printf(">>>>> Pares da Fila %i\n", ID);

    do
    {

        if(aux->num % 2 == 0)
        {
            printf("%i\n", aux->num);
        }
        aux = aux->prox;
    }
    while(aux != NULL);
}

void trocar(fila *f1, fila *f2)
{
    elemento *tmp;
    tmp = f1->inicio;
    f1->inicio = f2->inicio;
    f2->inicio = tmp;
}

void exibir_fila(fila *f)
{
    ID = ID + 1;
    printf("\n");
    printf(">>>>> Fila %i\n", ID);

    aux = f->inicio;

    do
    {
        printf("%i\n", aux->num);
        aux = aux->prox;
    }
    while(aux != NULL);
}

void esvaziar_fila(fila *f)
{
    aux = f->inicio;
    do
    {
        f->inicio = f->inicio->prox;
        free(aux);
        aux = f->inicio;
    }
    while(aux != NULL);

    free(aux);
    free(f);
}

int main(void)
{
    fila *f1 = criar_fila();
    fila *f2 = criar_fila();

    preencher_fila(f1);
    preencher_fila(f2);

    ID = 0;
    maior_fila(f1, f2);

    ID = 0;
    calculos(f1);
    calculos(f2);

    ID = 0;
    impares(f1);
    impares(f2);

    ID = 0;
    pares(f1);
    pares(f2);

    trocar(f1, f2);

    ID = 0;
    exibir_fila(f1);
    exibir_fila(f2);

    esvaziar_fila(f1);
    esvaziar_fila(f2);
}
