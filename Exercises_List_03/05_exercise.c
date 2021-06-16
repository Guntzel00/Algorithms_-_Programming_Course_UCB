#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 0, num, fat = 1;

    printf("Informe o número: ");
    scanf("%d", &num);

    while (num > 0)
    {
        fat = fat * num;
        num--;
    }
    printf("O fatorial desse número é: %d", fat);

    return 0;
}