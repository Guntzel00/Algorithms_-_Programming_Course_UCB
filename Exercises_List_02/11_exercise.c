#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float l1, l2, l3;

    printf("Digite 3 números: \n");
    scanf("%f%f%f", &l1, &l2, &l3);
    fflush(stdin);

    if (l1 <= 0 | l2 <= 0 | l3 <= 0)
    {
        printf("Números inválidos!");
    }
    else if (l1 < (l2 + l3) & l2 < (l1 + l3) & l3 < (l1 + l2))
    {
        if (l1 == l2 & l2 == l3)
        {
            printf("Triângulo equilátero, Lados %.1f, %.1f e %.1f", l1, l2, l3);
        }
        else if ((l1 == l2 & l2 != l3) | (l1 != l2 & l2 == l3) | (l1 == l3 & l2 != l1))
        {
            printf("Triângulo isósceles, Lados %.1f, %.1f, %.1f", l1, l2, l3);
        }
        else if (l1 != l2 & l2 != l3 & l1 != l3)
        {
            printf("Triâgulo escaleno, Lados %.1f, %.1f, %.1f", l1, l2, l3);
        }
    }
    else
    {
        printf("Não é possível formar um triângulo");
    }

    return 0;
}