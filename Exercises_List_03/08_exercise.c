#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, quantProd;
    char auxiliar, nomeProd[10];
    float preco;

    printf("Para começar, informe a quantidade de produtos: ");
    scanf("%d", &quantProd);
    fflush(stdin);

    for (i = 1; i <= quantProd; i++)
    {
        if (i < quantProd)
        {
            printf("\nQual o nome do produto %d? ", i);
            fgets(nomeProd, 10, stdin);
            fflush(stdin);

            printf("Qual o preço desse produto %d? ", i);
            scanf("%f", &preco);
            fflush(stdin);
            printf("\nO produto %spassou a custar %.2f!\n", nomeProd, preco * 1.1);

            printf("\nDeseja informar outro produto? |S| - sim |N| - não: ");
            scanf("%c", &auxiliar);
            fflush(stdin);
            auxiliar = toupper(auxiliar);
        }
        else
            printf("Por padrão o preço do último produto possui valor igual a -1");
        if (auxiliar == 'N')
        {
            i = quantProd;
        }
    }

    return 0;
}