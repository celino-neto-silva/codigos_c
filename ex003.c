//3) Faça um programa que acumula n valores da sequência de Fibonacci em uma pilha
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

pilha* criar_pilha()
{
    pilha *p = (pilha*) malloc(sizeof(pilha));
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

const int N = 5;
int fib1 = 0;
int fib2 = 1;
int fibo = 0;
elemento *aux;

int fibonacci()
{
    fibo = fib1 + fib2;
    fib1 = fib2;
    fib2 = fibo;
    return fibo;
}

void inserir_pilha(pilha* p, int n)
{
    elemento *novo = malloc(sizeof(elemento));
    novo->num = n;
    novo->prox = p->topo;
    p->topo = novo;
}

void exibir_pilha(pilha *p)
{
    aux = p->topo;
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
}

int main(void)
{
    pilha *pilha_fibonacci = criar_pilha();

    int n = 0;

    for(int i = 0; i < N; i++)
    {
        inserir_pilha(pilha_fibonacci, fibonacci());
    }

    exibir_pilha(pilha_fibonacci);
    esvaziar_pilha(pilha_fibonacci);
}
