#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct aluno
{
    char nome[50];
    int id;
    struct aluno *prox;
}
aluno;

typedef struct pilha
{
    struct aluno *topo;
}
pilha;

typedef struct nota
{
    int id;
    float notas_aluno[3];
    struct nota *prox;
}
nota;

typedef struct fila
{
    struct nota* inicio;
    struct nota* fim;
}
fila;

nota *aux_nota;
aluno *aux_aluno;
int ID_ALUNO = 0;

pilha* criar_alunos()
{
    pilha* p = (pilha*) malloc(sizeof(pilha));
    if(p == NULL)
    {
        printf("Erro inesperado! Reinicie o programa!\n");
        return NULL;
    }
    else
    {
        p->topo = NULL;
    }
    return p;
}

fila* criar_notas()
{
    fila* f = (fila*) malloc(sizeof(fila));
    if(f == NULL)
    {
        printf("Erro inesperado! Reinicie o programa!\n");
        return NULL;
    }
    else
    {
        f->inicio = NULL;
        f->fim = NULL;
    }
    return f;
}

void cadastrar_aluno(pilha* alunos)
{
    aluno *novo = (aluno*) malloc(sizeof(aluno));
    if(novo == NULL)
    {
        printf("Erro inesperado! Reinicie o programa!\n");
        return;
    }
    else
    {
        printf("Nome do aluno: ");
        scanf(" %s", novo->nome);

        ID_ALUNO = ID_ALUNO + 1;
        novo->id = ID_ALUNO;

        novo->prox = alunos->topo;
        alunos->topo = novo;

        printf("Aluno adicionado com sucesso!\n");
    }
}

void exibir_aluno(pilha* alunos)
{
    if(alunos->topo == NULL)
    {
        printf("A pilha está vazia!\n");
    }
    else
    {
        aux_aluno = alunos->topo;
        do
        {
            printf("ID: %i  -   Nome: %s\n", aux_aluno->id, aux_aluno->nome);
            aux_aluno = aux_aluno->prox;
        }
        while(aux_aluno != NULL);
    }
}

bool verificar_id(int id_, pilha* alunos, fila* notas)
{
    bool check = false;

    if(alunos->topo == NULL)
    {
        printf("Fila de alunos está vazia!\n");
    }
    else
    {
        if(notas->inicio == NULL)
        {
            printf("Pilha de notas está vazia!\n");
        }
        else
        {
            aux_aluno = alunos->topo;
            aux_nota = notas->inicio;

            do
            {
                if(aux_aluno->id == id_)
                {
                    check = true;
                    break;
                }
                aux_aluno = aux_aluno->prox;
            }
            while(aux_aluno != NULL);
        }
    }
}

void cadastrar_notas(fila* notas, pilha* alunos)
{
    nota* novo = (nota*) malloc(sizeof(nota));
    if(novo == NULL)
    {
        printf("Erro inesperado! Reinicie o programa!\n");
        return;
    }
    else
    {
        int id = 0;
        printf("->Cadastro de alunos:\n");
        printf("ID do aluno: ");
        scanf("%i", &id);

        if(!verificar_id(id, alunos, notas))
        {
            printf("ID inválido");
        }
        else
        {
            printf("Esse id existe!\n");
        }
    }
}

void exibir_notas(fila* notas)
{
    if(notas->inicio == NULL)
    {
        printf("A fila está vazia!\n");
        return;
    }
    else
    {
        aux_nota = notas->inicio;
        do
        {
            printf("ID: %i  -   Notas: %f, %f, %f\n", aux_nota->id, aux_nota->notas_aluno[0], aux_nota->notas_aluno[1], aux_nota->notas_aluno[2]);
            aux_nota = aux_nota->prox;
        }
        while(aux_nota != NULL);
    }
}
int main(void)
{
    int opcao = 0;

    pilha *alunos = criar_alunos();
    fila *notas = criar_notas();

    while(1)
    {
        printf("\n----> MENU <----\n");
        printf("1. Cadastrar alunos\n");
        printf("2. Cadastrar nota\n");
        printf("3. Calcular a média de um aluno\n");
        printf("4. Listar os nomes dos alunos\n");
        printf("5. Excluir aluno\n");
        printf("6. Excluir nota\n");
        printf("7. Sair\n");

        printf("\n");
        printf("Digite sua opção: ");
        scanf("%i", &opcao);

        switch(opcao)
        {
            case 1:
                //Cadastrar alunos
                system("clear");
                cadastrar_aluno(alunos);
                break;
            case 2:
                //Cadastrar nota
                cadastrar_notas(notas, alunos);
                break;
            case 3:
                //Calcular a média de um aluno
            case 4:
                //Listar os nomes dos alunos
            case 5:
                //Excluir aluno
            case 6:
                //Excluir nota
            case 7:
                //Sair
                system("clear");
                printf("Até a próxima! ...\n");
                exit(0);
            default:
                system("clear");
                printf("Opção inválida!");
        }
    }
}
