#include <stdio.h>
#include <math.h>

int main()
{
    // Variables declaration.
    double a;
    double b;
    double c;

    double delta;
    double x1;
    double x2;

    // Input values
    printf("Digite o primeiro numero:\n");
    scanf("%lf", &a);

    printf("Digite o segundo numero:\n");
    scanf("%lf", &b);

    printf("Digite o terceiro numero:\n");
    scanf("%lf", &c);

    // Calculating delta
    delta = pow(b, 2) - 4 * a * c;

    printf("%lf\n", delta);

    // Verifying input values
    if (a <= 0 || delta <= 0)
    {
        printf("Valores incorretos, por favor verifique-os.");
    }

    // Calculating X' and X"
    else
    {
        x1 = ((-(b) + sqrt(delta)) / (2 * a));

        x2 = ((-(b)-sqrt(delta)) / (2 * a));
    }

    // Pinting results
    printf("O valor de x1 e: %lf \nO valor de x2 e: %lf", x1, x2);
}