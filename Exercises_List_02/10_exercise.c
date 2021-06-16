#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;

    printf("Digite três números: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    fflush(stdin);

    if (n1 < n2 & n1 < n3)
    {
        printf("O menor número digitado é: %.1f", n1);
    }
    else if (n2 < n1 & n2 < n3)
    {
        printf("O menor número digitado é: %.1f", n2);
    }
    else
    {
        printf("O menor número digitado é: %.1f", n3);
    }

    return 0;
}