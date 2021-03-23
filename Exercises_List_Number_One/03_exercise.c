#include <stdio.h>

int main()
{

    float avarage;
    float array[3];

    printf("Digite seu primeiro numero:\n");
    scanf("%f", &array[0]);

    printf("Digite seu segundo numero:\n");
    scanf("%f", &array[1]);

    printf("Digite seu terceiro numero:\n");
    scanf("%f", &array[2]);

    for (int i = 0; i < 3; i++)
    {
        avarage += array[i];
    };

    avarage = avarage / 3;

    printf("A media e: %f", avarage);
    return 0;
}