#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(int argc, char*argv[])
{
    node *list = 0;

    for(int i = 1; i <= 3; i++)
    {
        node *n = malloc(sizeof(node));
        int num = atoi(argv[i]);

        n->number = num;
        n->next = list;

        list = n;
    }

    node *ptr = list;
    while(ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}

