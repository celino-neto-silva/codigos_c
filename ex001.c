#include<stdio.h>
#include<stdlib.h>

typedef struct elemento
{
    int num;
    struct elemento *prox;
}
elemento;

typedef struct pilha
{
    struct elemento *topo;
}
pilha;

elemento *aux;
int ID = 0;
int PILHA_MAIOR = 0;
int PILHA_ID = 0;

pilha* criar_pilha()
{
    pilha* p = (pilha*) malloc(sizeof(pilha));
    if(p == NULL)
    {
        printf("Unexpected error occurred!\n");
        return NULL;
    }
    else
    {
        p->topo = NULL;
    }
    return p;
}

void preencher_pilha(pilha *p)
{
    char continuar = 'S';

    do
    {
        elemento *novo = (elemento*) malloc(sizeof(elemento));
        printf("Digite um nº: ");
        scanf(" %i", &novo->num);

        novo->prox = p->topo;
        p->topo = novo;

        printf("Continuar? [S / N]: ");
        scanf(" %c",&continuar);
    }
    while(continuar == 'S' || continuar == 's');

    printf("\n");

    ID = ID + 1;
    if(ID == 1)
    {

        printf(">>>> Pilha %i recolhida!\n",1);
    }
    else if(ID == 2)
    {
        printf(">>>> Pilha %i recolhida!\n",2);
    }

    printf("\n");
}

void maior_pilha(pilha *p)
{
    int cont = 0;
    aux = p->topo;
    ID = ID + 1;

    printf(">>>>> Exibindo a Pilha %i\n", ID);
    printf("\n");

    do
    {
        printf("%i\n", aux->num);
        cont = cont + 1;
        aux = aux->prox;
    }
    while(aux != NULL);
    aux = NULL;

    if(cont > PILHA_MAIOR)
    {
        PILHA_MAIOR = cont;
        PILHA_ID = ID;
    }
}

void calculos(pilha* p)
{
    //Qtd, Média, Maior
    int cont = 0;
    int maior = 0;
    float soma = 0;
    float media = 0;

    ID = ID + 1;

    aux = p->topo;
    do
    {
        if(cont == 0)
        {
            maior = aux->num;
        }
        else if(aux->num > maior)
        {
            maior = aux->num;
        }
        soma = soma + aux->num;
        cont = cont + 1;
        aux = aux->prox;
    }
    while(aux != NULL);

    media = soma / cont;

    printf("\n");
    printf(">>>>>> Estatísticas da Pilha %i\n", ID);
    printf("->Qtd de Elementos: %i\n",cont);
    printf("->Média aritmética: %f\n", media);
    printf("->Maior elemento: %i\n", maior);
}

void impares(pilha *p)
{
    ID = ID + 1;
    aux = p->topo;
    printf("\n");
    printf(">>>>> Ímpares da Pilha %i\n", ID);
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

void pares(pilha *p)
{
    ID = ID + 1;
    aux = p->topo;

    printf("\n");
    printf(">>>>> Pares da Pilha %i\n", ID);

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

void trocar(pilha *p1, pilha *p2)
{
    elemento *tmp = p1->topo;
    p1->topo = p2->topo;
    p2->topo = tmp;
}

void exibir_pilha(pilha *p)
{
    aux = p->topo;
    ID = ID + 1;
    printf(">>>>> Exibindo a Pilha %i\n", ID);
    printf("\n");
    do
    {
        printf("%i\n", aux->num);
        aux = aux->prox;
    }
    while(aux != NULL);
}

void esvaziar_pilha(pilha *p)
{
    aux = p->topo;
    do
    {
        p->topo = p->topo->prox;
        free(aux);
        aux = p->topo;
    }
    while(aux != NULL);

    free(aux);
    free(p);
}

int main(void)
{
    pilha *p1 = criar_pilha();
    pilha *p2 = criar_pilha();

    preencher_pilha(p1);
    preencher_pilha(p2);

    ID = 0;

    maior_pilha(p1);
    maior_pilha(p2);

    printf("\n");
    printf(">>>>> A Pilha %i é a maior com %i elementos!\n", PILHA_ID, PILHA_MAIOR);

    ID = 0;
    calculos(p1);
    calculos(p2);

    ID = 0;
    impares(p1);
    impares(p2);

    ID = 0;
    pares(p1);
    pares(p2);

    trocar(p1, p2);

    ID = 0;
    exibir_pilha(p1);
    exibir_pilha(p2);

    esvaziar_pilha(p1);
    esvaziar_pilha(p2);
}
