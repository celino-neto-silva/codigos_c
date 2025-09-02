#include<stdio.h>

int main(void)
{
    float metros = 0;

    printf("Informe a Distância (m): ");
    scanf("%f", &metros);

    float mm = metros * 1000;
    float cm = metros * 100;
    float dm = metros * 10;

    float DAM = metros / 10;
    float HAM = metros / 100;
    float KM = metros / 1000;

    printf("%f\n", mm);
    printf("%f\n", cm);
    printf("%f\n", dm);
    printf("%f\n", metros);
    printf("%f\n", DAM);
    printf("%f\n", HAM);
    printf("%f\n", KM);
}
