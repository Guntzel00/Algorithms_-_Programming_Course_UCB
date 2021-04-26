/* 
Nome Completo: Gustavo Guntzel de Souza
Matricula: UC204214634
Curso: Algoritimos de programacao 
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// ----- Main Function ------

int main()
{

    // ------ Variables ------

    int numberOfsessions;

    char movieNameInput[50];

    int numberOfViewers = 0;

    int childViewers;
    int teenagerViewers;
    int adultViewers;
    int seniorViewers;

    int underEighteen;
    int overEighteen;

    int maleViewers;
    int femaleViewers;

    // ------ Inputs ------

    do
    {
        printf("Digite o número de sessões:\n");
        scanf("%d", &numberOfsessions);
        fflush(stdin);
    } while (numberOfsessions != 2);

    do
    {
        printf("Digite o nome do filme:\n");
        fgets(movieNameInput, 50, stdin);
        fflush(stdin);

        printf("%s", movieNameInput);

    } while (strlen(movieNameInput) == 0);

    do
    {
        printf("Digite o número de pessoas que assistiram o filme:\n");
        scanf("%d", numberOfViewers);
        fflush(stdin);
        printf()
    } while (numberOfViewers < 10);
}