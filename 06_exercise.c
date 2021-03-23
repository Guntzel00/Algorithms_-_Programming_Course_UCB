#include <stdio.h>

int main()
{
    float primeiraNota;
    float segundaNota;
    float media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &primeiraNota);

    printf("Digite a segunda nota:\n");
    scanf("%f", &segundaNota);

    media = (primeiraNota * 3.5 + segundaNota * 7.5) / 11;

    printf("Sua nota media foi de: %f", media);

    return 0;
}