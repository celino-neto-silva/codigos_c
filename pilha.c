#include<stdio.h>
#include<stdlib.h>

//1º- Definir o elemento que vai estar na pilha
typedef struct elemento{
    int num;
    struct elemento *prox;
}elemento;

//2º- Definir a pilha
typedef struct pilha{
    struct elemento *topo;
}pilha;

//3º- Definir uma função que cria a pilha
pilha* criar_pilha();

//4º- Inserir elementos na pilha.
void inserir_pilha(pilha *minha_pilha);

//5º- Consultar pilha
void consultar_pilha(pilha *minha_pilha);

//6º- Definir um ponteiro auxiliar
elemento *aux;

//7º- Remover da pilha
void remover_pilha(pilha *minha_pilha);

//8º- Esvaziar a pilha
void esvaziar_pilha(pilha *minha_pilha);

int main()
{
    pilha *minha_pilha = criar_pilha();
    for(int i = 0; i < 3; i++)
    {
        inserir_pilha(minha_pilha);
    }
    consultar_pilha(minha_pilha);
    remover_pilha(minha_pilha);
    esvaziar_pilha(minha_pilha);
    return 0;
}

pilha* criar_pilha()
{
    pilha* minha_pilha = (pilha*) malloc(sizeof(pilha));
    if(minha_pilha == NULL)
    {
        printf("Unexpected error!\n");
        return NULL;
    }
    else
    {
        minha_pilha->topo = NULL;
    }
    return minha_pilha;
}

void inserir_pilha(pilha *minha_pilha)
{
    elemento *novo = (elemento*) malloc(sizeof(elemento));
    printf("Digite um novo nº: ");
    scanf("%i", &novo->num);

    //Aqui eu atualizo o novo elemento inserido
    novo->prox = minha_pilha->topo;
    minha_pilha->topo = novo;

    printf("Numero inserido na pilha!\n");
}

void consultar_pilha(pilha *minha_pilha)
{
    if(minha_pilha->topo == NULL)
    {
        printf("A pilha está vazia!\n");
    }
    else
    {
        aux = minha_pilha->topo;
        do
        {
            printf("%i\n", aux->num);
            aux = aux->prox;
        }
        while(aux != NULL);
    }
}

void remover_pilha(pilha *minha_pilha)
{
    if(minha_pilha->topo == NULL)
    {
        printf("A pilha está vazia!\n");
    }
    else
    {
        aux = minha_pilha->topo;
        printf("Nº removido: %i\n", minha_pilha->topo->num);
        minha_pilha->topo = minha_pilha->topo->prox;
        free(aux);
    }
}

void esvaziar_pilha(pilha *minha_pilha)
{
    if(minha_pilha->topo == NULL)
    {
        printf("A pilha está vazia!\n");
    }
    else
    {
        aux = minha_pilha->topo;
        do
        {
            minha_pilha->topo = minha_pilha->topo->prox;
            free(aux);
            aux = minha_pilha->topo;
        }
        while(aux != NULL);
        free(aux);
        free(minha_pilha);
    }
}

