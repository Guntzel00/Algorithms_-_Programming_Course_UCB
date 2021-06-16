#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int anoNasc, anoAtual, dias;

    printf("Informe seu ano de nascimento: ");
    scanf("%i", &anoNasc);
    fflush(stdin);

    printf("Informe o ano atual: ");
    scanf("%i", &anoAtual);
    fflush(stdin);

    if (anoAtual < anoNasc)
    {
        printf("Idade negativa, inválido!");
    }
    else if (anoNasc < 0 | anoAtual < 0)
    {
        printf("O ano atual ou o ano de nascimento não pode ser negativo!");
    }
    else
    {
        dias = ((anoAtual - anoNasc) * 365);

        printf("Você já viveu %i dias (aprox.) em sua vida", dias);
    }

    return 0;
}