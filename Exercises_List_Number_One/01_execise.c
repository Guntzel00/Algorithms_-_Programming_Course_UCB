#include <stdio.h>

int main()
{

    int horas;

    printf("Digite o numero inteiro de horas:");
    scanf("%d", &horas);

    int minutos = horas * 60;

    int segundos = minutos * 60;

    printf("%d horas sap %d munitos e %d segundos", horas, minutos, segundos);

    return 0;
}