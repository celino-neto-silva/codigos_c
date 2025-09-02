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

elemento *auxiliar;

fila* criar_fila();

void inserir_fila(fila* minha_fila);

void remover_fila(fila *minha_fila);

void consultar_fila(fila *minha_fila);

void esvaziar_fila(fila *minha_fila);

int main(void)
{
    fila *minha_fila = criar_fila();
    for(int i = 0; i < 3; i++)
    {
        inserir_fila(minha_fila);
    }
    consultar_fila(minha_fila);
    remover_fila(minha_fila);
    esvaziar_fila(minha_fila);
    return 0;
}

fila* criar_fila()
{
    fila* minha_fila = (fila*) malloc(sizeof(fila));
    if(minha_fila == NULL)
    {
        printf("Unexpected Error!\n");
        return NULL;
    }
    else
    {
        minha_fila->inicio = NULL;
        minha_fila->fim = NULL;
    }
    return minha_fila;
}

void inserir_fila(fila* minha_fila)
{
    elemento *novo = (elemento*) malloc(sizeof(elemento));
    printf("Digite um nº: ");
    scanf("%i", &novo->num);

    novo->prox = NULL; //Caso não seja inserido mais nada este elemento vai ser o inicio e fim da fila.

    if(minha_fila->inicio == NULL) //Caso a fila esteja vazia.
    {
        minha_fila->inicio = novo;
        minha_fila->fim = novo;
    }
    else //Caso a fila não esteja vazia.
    {
        minha_fila->fim->prox = novo; //Este código é: Vai a fila, vai ao atributo fim, vai ao atributo prox do atributo fim, coloque lá o o novo nó.
        minha_fila->fim = novo; //Atribua a totalidade do elemento novo ao elemento fim.
    }
    printf("Número inserido na fila!\n");
}

void remover_fila(fila *minha_fila)
{
    if(minha_fila->inicio == NULL)
    {
        printf("A fila está vazia!\n");
    }
    else
    {
        auxiliar = minha_fila->inicio; //Auxiliar está a segurar a corrente de elementos para que não haja vazamento de memória (Memory Leak!)
        printf("%i removido!\n", minha_fila->inicio->num);
        minha_fila->inicio = minha_fila->inicio->prox;
        free(auxiliar);
    }
}

void consultar_fila(fila *minha_fila)
{
    if(minha_fila->inicio == NULL)
    {
        printf("A fila está vazia!\n");
    }
    else
    {
        auxiliar = minha_fila->inicio;
        do
        {
            printf("%i\n", auxiliar->num);
            auxiliar = auxiliar->prox;
        }
        while(auxiliar != NULL);
    }
}

void esvaziar_fila(fila *minha_fila)
{
    if(minha_fila->inicio == NULL)
    {
        printf("A fila está vazia!\n");
    }
    else
    {
        auxiliar = minha_fila->inicio;
        do
        {
            minha_fila->inicio = minha_fila->inicio->prox;
            free(auxiliar);
            auxiliar = minha_fila->inicio;
        }
        while(auxiliar != NULL);

        free(auxiliar);
        free(minha_fila);
    }
}
