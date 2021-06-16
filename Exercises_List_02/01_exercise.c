#include <stdio.h>

int main()
{
    int velocidade;
    char placa[7];

    printf("Digite a placa do carro:");
    scanf("%s", &placa);
    fflush(stdin);

    printf("Digite a valocidade do carro:");
    scanf("%i", &velocidade);
    fflush(stdin);

    if (velocidade > 80)
    {
        printf("Voce foi multado.");
    }

    return 0;
}