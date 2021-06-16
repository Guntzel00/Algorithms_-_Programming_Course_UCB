#include <stdio.h>
#include <locale.h>

int exerc_1()
{
    setlocale(LC_ALL, "Portuguese");

    int veloc;
    char placa[7];

    printf("Digite a placa do carro: \n");
    scanf("%s", &placa);
    fflush(stdin);

    printf("Digite a velocidade: \n");
    scanf("%i", &veloc);
    fflush(stdin);

    if (veloc > 80)
    {
        printf("Velocidade registrada: %iKM/H, acima do limite permitido. O veículo de placa %s será multado!", veloc, placa);
    }
    else
    {
        printf("Velocidade registrada: %iKM/H, dentro do limite permitido. O veículo de placa %s não será multado", veloc, placa);
    }

    return 0;
}

int exerc_3()
{
    setlocale(LC_ALL, "Portuguese");

    float l1, l2, l3;

    printf("Digite 3 números: \n");
    scanf("%f%f%f", &l1, &l2, &l3);
    fflush(stdin);

    if (l1 <= 0 || l2 <= 0 || l3 <= 0)
    {
        printf("Números inválidos!");
    }
    else if (l1 < (l2 + l3) || l2 < (l1 + l3) & l3 < (l1 + l2))
    {
        printf("Triângulo válido!, Lados %.1f, %.1f e %.1f", l1, l2, l3);
    }
    else
    {
        printf("Não é possível formar um triângulo!");
    }

    return 0;
}