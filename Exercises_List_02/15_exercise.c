#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float horas, conta;

    printf("Informe a quantidade de horas de internet utilizadas: ");
    scanf("%f", &horas);
    fflush(stdin);

    if (horas <= 20)
    {
        printf("O valor da conta a ser paga é R$ 30,00");
    }
    else
    {
        conta = ((horas - 20) * 3) + 30;
        printf("O valor da conta a ser paga é R$ %.2f", conta);
    }

    return 0;
}