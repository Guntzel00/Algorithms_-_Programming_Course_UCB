#include <stdio.h>

int main()
{
    int temp = 0;
    float alturas[10];
    float maiorAltura;

    while (temp <= 10)
    {
        temp++;
        printf("Digite a altura da %iª pessoa:", temp);
        scanf("%f", &alturas[temp]);

        if (alturas[temp - 1] < alturas[temp])
        {
            maiorAltura = alturas[temp];
        }
        else
        {
            continue;
        }
    }

    printf("A maior altura foi: %f", maiorAltura);
    return 0;
}