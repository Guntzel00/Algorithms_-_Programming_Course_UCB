#include <stdio.h>

int main()
{
    char nome[15];

    char sexo;

    printf("Digite seu nome:\n");
    scanf("%s", &nome);
    fflush(stdin);

    printf("Digite seu sexo com H ou M:\n");
    scanf("%c", &sexo);
    fflush(stdin);

    if (sexo == "H")
    {
        printf("\n Sr.");
    }
    else if (sexo == "M")
    {
        printf("\n Sra.");
    }
    else
    {
        printf("Dados invalidos");
    }

    return 0;
}