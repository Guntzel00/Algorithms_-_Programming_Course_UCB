#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma = 0;

    printf("Informe o número 1: ");
    scanf("%d", &num1);
    printf("Informe o número 2: ");
    scanf("%d", &num2);

    for (int i = 1; i <= num1; i++)
        soma = soma + num2;

    printf("%d x %d = %d", num1, num2, soma);
    return 0;
}