#include<stdio.h>

int main(void)
{
    for(int i = 30; i >= 1; i--)
    {
        if(i % 4 == 0)
        {
            printf("[%i]\n", i);
        }
        else
        {
            printf("(%i)\n", i);
        }
    }
}
