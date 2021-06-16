#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int fruta;
    char auxiliar;

    do
    {
        printf("---------- Bem-vindo (a) a feira de frutas! Seguem as opções que nós temos:\n");
        printf("\n|1| - Abacaxi  |2|- Maçã   |3|- Pera\n");
        printf("Digite o número referente a sua escolha: ");
        scanf("%d", &fruta);
        fflush(stdin);
        if (fruta == 0)
            printf("Essa fruta não consta no nosso sistema, tente novamente!");
        else
        {
            switch (fruta)
            {
            case 1:
                printf("Abacaxi!", fruta);
                break;
            case 2:
                printf("Maçã!", fruta);
                break;
            case 3:
                printf("Pera!", fruta);
                break;
            default:
                printf("Essa fruta não consta no nosso sistema, tente novamente!");
            }
        }
        do
        {
            printf("\nGostaria de escolher uma nova fruta? |s| - sim ou |n|- não: ");
            scanf("%c", &auxiliar);
            fflush(stdin);
            auxiliar = tolower(auxiliar);
            if (auxiliar != 's' && auxiliar != 'n')
                printf("INVÁLIDO!");
        } while (auxiliar != 's' && auxiliar != 'n');

    } while (auxiliar == 's');

    return 0;
}