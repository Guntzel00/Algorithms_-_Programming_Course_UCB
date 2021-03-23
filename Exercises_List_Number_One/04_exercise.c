#include <stdio.h>

int main()
{

    int primeiro;
    int segundo;
    int resto;
    int quociente;

    printf("Forneca um numero dividendo inteiro:\n");
    scanf("%d", &primeiro);

    printf("Forneca um numero divisor inteiro:\n");
    scanf("%d", &segundo);

    quociente = primeiro / segundo;
    resto = primeiro % segundo;

    printf("O quociente vale %d e o resto %d", quociente, resto);
    return 0;
}