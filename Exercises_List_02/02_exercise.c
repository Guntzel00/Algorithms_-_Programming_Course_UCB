#include <stdio.h>

int main()
{
    float numero;

    printf("Digite um numero:");
    scanf("%f", &numero);

    if (numero > 0)
    {
        numero = -(numero);
        printf("O modulo de seu numero e: %.0f", numero);
    }
    else
    {
        printf("O modulo de seu numero e: %.0f", numero);
    }
    return 0;
}