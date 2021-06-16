#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, fat;

    printf("Informe o número: ");
    scanf("%d", &num);

    if (num == 0)
        fat == 1;

    for (fat = 1; num > 1; num = num - 1)
        fat = fat * num;

    printf("O fatorial desse número é: %d", fat);
    return 0;
}