#include<stdio.h>
#include<stdlib.h>

typedef struct elo
{
    int num;
    struct elo *prox;
}
elo;

typedef struct lista
{
    struct elo *inicio;
    struct elo *fim;
}
lista;

lista* criar_lista();
void inserir_inicio(lista* minha_lista);
void inserir_fim(lista* minha_lista);
void imprimir_lista(lista* minha_lista);
void remover_elemento(lista* minha_lista);
void esvaziar_lista(lista *minha_lista);
void esvaziar_lista(lista *minha_lista);

elo *aux;
elo *anterior;

int main(void)
{
    lista *minha_lista = criar_lista();
    inserir_inicio(minha_lista);
    inserir_fim(minha_lista);
    imprimir_lista(minha_lista);
    remover_elemento(minha_lista);
    esvaziar_lista(minha_lista);
}

lista* criar_lista()
{
    lista *minha_lista = (lista*) malloc(sizeof(lista));
    if(minha_lista == NULL)
    {
        printf("Unexpected error occurred!\n");
        return NULL;
    }
    else
    {
        minha_lista->inicio = NULL;
        minha_lista->fim = NULL;
    }
    return minha_lista;
}

void inserir_inicio(lista* minha_lista)
{
    elo* novo = (elo*) malloc(sizeof(elo));
    printf("Digite o nº a ser inserido no inicio da lista: ");
    scanf("%i",&novo->num);

    if(minha_lista->inicio == NULL)
    {
        novo->prox = NULL;
        minha_lista->inicio = novo;
        minha_lista->fim = novo;
    }
    else
    {
        novo->prox = minha_lista->inicio;//1º- Faço com que o novo elemento aponte para o primeiro elemento.
        minha_lista->inicio = novo;//1º- Faço com que o novo elemento se torne o primeiro elemento.
    }
    printf("Nº inserido no inicio da lista!\n");
}

void inserir_fim(lista* minha_lista)
{
    elo* novo = (elo*) malloc(sizeof(elo));
    printf("Digite o nº a ser inserido no inicio da lista: ");
    scanf("%i",&novo->num);

    if(minha_lista->inicio == NULL)
    {
        novo->prox = NULL;
        minha_lista->inicio = novo;
        minha_lista->fim = novo;
    }
    else
    {
        novo->prox = NULL;
        minha_lista->fim->prox = novo;//1º- Faço que o ultimo elemento aponte para o novo elemento.
        minha_lista->fim = novo;//2º- Faço que o novo elemento se torne o último elemento.
    }
    printf("Numero inserido no fim da lista!\n");
}

void imprimir_lista(lista* minha_lista)
{
    if(minha_lista->inicio == NULL)
    {
        printf("A lista está vazia!\n");
    }
    else
    {
        aux = minha_lista->inicio;
        do
        {
            printf("%i\n", aux->num);
            aux = aux->prox;
        }
        while(aux != NULL);
    }
}

void remover_elemento(lista* minha_lista)
{
    int numero;
    int achou;
    //1ª Etapa: Verificar se a lista não está vazia!
    if(minha_lista->inicio == NULL)
    {
        printf("A lista está vazia!\n");
    }
    else
    {
        //2ª Etapa: Receber a informação do utilizador de qual elemento deve ser removido.
        printf("Digite o elemento a ser removido: ");
        scanf("%d", &numero);
        //3ª Etapa: Atribuir a minha variavel do tipo elemento o inicio da minha lista.("Atrrav+es do inicio eu consigo verficar toda minha lista!").
        aux = minha_lista->inicio;
        anterior = NULL;
        achou = 0;
        do
        {
            if(aux->num == numero)//Caso a variável auxiliar seje o elemento escolhido pelo o utilizador.
            {
                achou = achou + 1;//Minha variavel verificadora.
                //4ª Etapa: Verificar se o elemento escolhido pelo o utilizador é o 1º elemento da lista. Caso não, continue!
                if(aux == minha_lista->inicio)//Caso o elemento seje o único elemento da lista.
                {
                    minha_lista->inicio = aux->prox;
                    free(aux);
                    aux = minha_lista->inicio;
                }
                //4ª Etapa 1: Verificar se o elemento escolhido pelo o utilizador é o último elemento da lista.
                else if(aux == minha_lista->fim)
                {
                    anterior->prox = NULL;//Usamos a variavel anterior como auxiliar, sua função será: 1º Substituir o último elemento e 2º Apontar para NULL
                    minha_lista->fim = anterior;//Atualizamos o fim
                    free(aux);//Removemos o elemento escolhido pelo o utilizador
                    aux = NULL;//Tornamos a variavel auxiliar para seu estado inicial.
                }
                //4ª Etapa 2: Caso o elemento escolhido pelo o utilizador não seje nem o 1º nem o último!
                else
                {
                    anterior->prox = aux->prox;
                    free(aux);
                    aux = anterior->prox;
                }
            }
            else
            {
                anterior = aux;
                aux = aux->prox;
            }
        }
        while(aux != NULL);

        if(achou==0)
        {
            printf("Nº não encontrado!\n");
        }
        else
        {
            printf("Nº encontrado e removido %i vezes!\n", achou);
        }
    }
}

void esvaziar_lista(lista *minha_lista)
{
    if(minha_lista->inicio == NULL)
    {
        printf("A lista está vazia!\n");
    }
    else
    {
        aux = minha_lista->inicio;
        do
        {
            minha_lista->inicio = minha_lista->inicio->prox;
            free(aux);
            aux = minha_lista->inicio;
        }
        while(aux != NULL);

        free(aux);
        free(minha_lista);
    }
}
