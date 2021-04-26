#include <stdio.h>

int main()
{
    float raio;
    float area;

    printf("Qual o raio da sua circunferencia ?");
    scanf("%f", &raio);

    area = raio * raio * 3.14;

    printf("A area da sua circunferencia mede: %f", area);

    return 0;
}