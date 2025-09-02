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

void cadastrar(pilha* p)
{
    elemento *novo = (elemento*) malloc(sizeof(elemento));

    printf("Digite um nº: ");
    scanf("%i", &novo->num);

    novo->prox = p->topo;
    p->topo = novo;
}

void pares(pilha* p)
{
    if(p->topo == NULL)
    {
        printf("A pilha está vazia!\n");
    }
    else
    {
        aux = p->topo;
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
}

void remover(pilha* p)
{
    if(p->topo == NULL)
    {
        printf("A pilha está vazia!\n");
    }
    else
    {
        aux = p->topo;
        printf("Removendo o nº %i\n", p->topo->num);
        p->topo = p->topo->prox;
        free(aux);
    }
}

void exibir(pilha* p)
{
    if(p->topo == NULL)
    {
        printf("A pilha está vazia!\n");
    }
    else
    {
        aux = p->topo;
        do
        {
            printf("%i\n", aux->num);
            aux = aux->prox;
        }
        while(aux != NULL);
    }
}

void esvaziar(pilha* p)
{
    if(p->topo == NULL)
    {
        exit(0);
    }
    else
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

    free(aux);
    free(p);
}

int main(void)
{
    int opcao = 0;
    pilha* p = criar_pilha();

    while(1)
    {
        printf("\n---- Menu ----\n");
        printf("1. Cadastrar número\n");
        printf("2. Mostrar números pares\n");
        printf("3. Excluir número\n");
        printf("4. Exibir todos os números\n");
        printf("5. Sair\n");

        printf("Digite sua opção: ");
        scanf("%i", &opcao);

        switch(opcao)
        {
            case 1:
            {
                system("clear");
                printf(">>>>>>> Cadastrar números\n");
                printf("\n");
                cadastrar(p);
                break;
            }
            case 2:
            {
                system("clear");
                printf(">>>>>>> Printar pares\n");
                printf("\n");
                pares(p);
                break;
            }
            case 3:
            {
                system("clear");
                printf(">>>>>>> Remover números\n");
                printf("\n");
                remover(p);
                break;
            }
            case 4:
            {
                system("clear");
                printf(">>>>>>> Exibir todos os números\n");
                printf("\n");
                exibir(p);
                break;
            }
            case 5:
            {
                system("clear");
                printf("Saindo ......\n");
                esvaziar(p);
                exit(0);
            }
            default:
            {
                printf("Opção inválida!\n");
            }
        }
    }

    return 0;
}
