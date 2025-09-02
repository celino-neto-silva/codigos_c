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

typedef struct fila
{
    struct elemento *inicio;
    struct elemento *fim;
}
fila;

elemento *aux;
elemento *aux1;

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

fila* criar_fila()
{
    fila* f = (fila*) malloc(sizeof(fila));
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

void inserir_pilha(pilha* p)
{
    elemento *novo = (elemento*) malloc(sizeof(elemento));
    printf("Digite um nº: ");
    scanf("%i", &novo->num);

    novo->prox = p->topo;
    p->topo = novo;
}

void inserir_fila(fila* f)
{
    elemento *novo = (elemento*) malloc(sizeof(elemento));
    printf("Digite um nº: ");
    scanf("%i", &novo->num);
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
}

void exibir(pilha* p, fila* f)
{
    aux = p->topo;
    aux1 = f->inicio;

    do
    {
        printf("Pilha: %i    |   Fila: %i\n", aux->num, aux1->num);
        aux = aux->prox;
        aux1 = aux1->prox;
    }
    while(aux != NULL && aux1 != NULL);
}

void esvaziar(pilha* p, fila* f)
{
    aux = p->topo;
    aux1 = f->inicio;

    do
    {
        p->topo = p->topo->prox;
        free(aux);
        aux = p->topo;


        f->inicio = f->inicio->prox;
        free(aux1);
        aux1 = f->inicio;
    }
    while(aux != NULL && aux1 != NULL);

    free(aux);
    free(aux1);

    free(p);
    free(f);
}

int main(void)
{
    pilha *p = criar_pilha();
    fila *f = criar_fila();

    printf("\n");
    printf(">>>>>>>>>> Recolha de PILHA <<<<<<<<<<<\n");
    for(int i = 0; i < 5; i++)
    {
        inserir_pilha(p);
    }

    system("clear");

    printf("\n");
    printf(">>>>>>>>>> Recolha de FILA <<<<<<<<<<<\n");
    for(int i = 0; i < 5; i++)
    {
        inserir_fila(f);
    }

    system("clear");

    exibir(p, f);
    esvaziar(p, f);
}
