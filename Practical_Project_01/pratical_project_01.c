/* 
Nome Completo: Gustavo Guntzel de Souza
Matricula: UC204214634
Curso: Algoritimos de programacao 
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ----- Main Function ------

int main()
{

    // ------ Variables ------

    int numberOfsessions;

    char movieNameInput[50];

    int numberOfViewers;

    int childViewers = 0;
    int teenagerViewers = 0;
    int adultViewers = 0;
    int seniorViewers = 0;

    int eighteenAndMale = 0;
    int eighteenAndFemale = 0;

    int maleViewers = 0;
    int femaleViewers = 0;

    char moreInfo;

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

    } while ((strlen(movieNameInput) - 1) == 0);

    do
    {
        printf("Digite o número de pessoas que assistiram ao filme:\n");
        scanf("%d", &numberOfViewers);
        fflush(stdin);
    } while (numberOfViewers < 5 || numberOfViewers > 100);

    for (int i = 0; i < numberOfViewers; i++)
    {
        int viewerAge;
        char viewerSex;

        do
        {

            printf("Digite a idade do %dº espectador:\n", i + 1);
            scanf("%d", &viewerAge);
            fflush(stdin);
        } while (!isdigit(viewerAge) && (viewerAge <= 2 || viewerAge > 100));

        do
        {
            printf("Digite o sexo do %dº espectador, use a letra [M] para masculino e [F] para feminino:\n", i + 1);
            scanf("%c", &viewerSex);
            viewerSex = toupper(viewerSex);
            fflush(stdin);

        } while (viewerSex != 'M' && viewerSex != 'F');

        switch (viewerSex)
        {
        case 'F':
            femaleViewers++;
            break;
        case 'M':
            maleViewers++;
            break;

        default:
            printf("Sexo não informado.");
            break;
        }

        if (viewerAge >= 65)
        {
            seniorViewers++;
            if (viewerSex == 'F')
            {
                eighteenAndFemale++;
            }
            else
            {
                eighteenAndMale++;
            }
        }
        else if (viewerAge >= 14 && viewerAge < 18)
        {
            teenagerViewers++;
        }
        else if (viewerAge >= 18 && viewerAge < 65)
        {
            adultViewers++;

            if (viewerSex == 'F')
            {
                eighteenAndFemale++;
            }
            else
            {
                eighteenAndMale++;
            }
        }
        else
        {
            childViewers++;
        }
    }

    system("clear");

    printf("Nome do filme: %s", movieNameInput);
    printf("Número de espectadores: %d\n", numberOfViewers);
    printf("Número de espectadores homens: %d\n", maleViewers);
    printf("Número de espectadores mulheres: %d\n", femaleViewers);
    printf("Número de espectadores crianças: %d\n", childViewers);
    printf("Número de espectadores Adolescentes: %d\n", teenagerViewers);
    printf("Número de espectadores Adultos: %d\n", adultViewers);
    printf("Número de espectadores Idosos: %d\n\n\n", seniorViewers);

    printf("Gostaria de ver mais informações sobre os espectadores do filme?\n Digite [S] para Sim e [N] para Não.\n");
    scanf("%c", &moreInfo);
    moreInfo = toupper(moreInfo);
    fflush(stdin);

    if (moreInfo == 'S')
    {
        system("clear");

        printf("Número de espectadores homens e maiores de idade: %d\n", eighteenAndMale);
        printf("Número de espectadores mulheres e maiores de idade: %d\n", eighteenAndFemale);
        return 0;
    }
    else
    {
        return 0;
    }
}
