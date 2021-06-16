#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, n = 1;
    float h;

    while (n < 2)
    {
        printf("Informe um número N: ");
        scanf("%d", &n);
        break;
    }
    h = 0;
    for (i = 1; i <= n; i++)
        h = h + 1.0 / i; //1.0 calculo em float
    printf("O resultado de H é %.2f", h);

    return 0;
}