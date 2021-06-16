#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ddd;

    printf("Informe o DDD: ");
    scanf("%i", &ddd);
    fflush(stdin);

    switch (ddd)
    {
    case 61:
        printf("DDD %i, Brasilia", ddd);
        break;
    case 71:
        printf("DDD %i, Salvador", ddd);
        break;
    case 11:
        printf("DDD %i, Sao Paulo", ddd);
        break;
    case 21:
        printf("DDD %i, Rio de Janeiro", ddd);
        break;
    case 32:
        printf("DDD %i, Juiz de Fora", ddd);
        break;
    case 19:
        printf("DDD %i, Campinas", ddd);
        break;
    case 27:
        printf("DDD %i, Vitoria", ddd);
        break;
    case 31:
        printf("DDD %i, Belo Horizonte", ddd);
        break;
    default:
        printf("DDD %i, Invalido", ddd);
    }

    return 0;
}
