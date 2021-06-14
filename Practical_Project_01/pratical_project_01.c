/* 
Nome Completo: Gustavo Guntzel de Souza
Matricula: UC204214634
Curso: Algoritimos de programacao 
*/

// Importing libraries
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ----- Main Function ------

int main()
{

    // ------ Declaring Variables ------

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

    // ------ Inputs and Logic ------

    /* Getting number of sessions */
    do // Using a "do" repetiton structure
    {
        printf("Digite o número de sessões:\n"); // Asking the user the number of sessions
        scanf("%d", &numberOfsessions);          // Requiring input from user
        fflush(stdin);                           // Clearing input buffer
    } while (numberOfsessions != 2);             // Validating our input value through while condition
    //it will be repeated until the condition isn't meet

    /* Getting the movie name */
    do
    {
        printf("Digite o nome do filme:\n"); // Asking for the movie's name
        fgets(movieNameInput, 50, stdin);    // Using "fgets" function to get the movie's name
        fflush(stdin);

    } while ((strlen(movieNameInput) - 1) == 0); //adjusting our function return to match the right parameters

    /* Getting the number of viewers */

    do
    {
        printf("Digite o número de pessoas que assistiram ao filme:\n"); //Asking the user the number of viewers
        scanf("%d", &numberOfViewers);
        fflush(stdin);
    } while (numberOfViewers < 10 || numberOfViewers > 100); //Input validation

    for (int i = 0; i < numberOfViewers; i++) // "for" loop repetion structure to gather each viewers age and sex
    {
        // declaring temporary variables
        int viewerAge;
        char viewerSex;

        // Viewer age input + validation using "ctype.h" library
        do
        {

            printf("Digite a idade do %dº espectador:\n", i + 1);
            scanf("%d", &viewerAge);
            fflush(stdin);
        } while (!isdigit(viewerAge) && (viewerAge <= 2 || viewerAge > 100));

        // Viewer sex input + validation using regular conditionals
        do
        {
            printf("Digite o sexo do %dº espectador, use a letra [M] para masculino e [F] para feminino:\n", i + 1);
            scanf("%c", &viewerSex);
            viewerSex = toupper(viewerSex);
            fflush(stdin);

        } while (viewerSex != 'M' && viewerSex != 'F');

        // diving viewers according to their sex group using switch case conditional
        switch (viewerSex)
        {
        case 'F': // if "viewrSex" meets that value, the following case code block will be executed
            femaleViewers++;
            break; // stops switch condition
        case 'M':
            maleViewers++;
            break;

        default:
            printf("Sexo não informado.");
            break;
        }

        //dividing viewer into groups according to their age using "if's" and "else's" conditionals
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

    system("clear"); //clearing out the terminal

    //printing data collection results
    printf("Nome do filme: %s", movieNameInput);
    printf("Número de espectadores: %d\n", numberOfViewers);
    printf("Número de espectadores homens: %d\n", maleViewers);
    printf("Número de espectadores mulheres: %d\n", femaleViewers);
    printf("Número de espectadores crianças: %d\n", childViewers);
    printf("Número de espectadores Adolescentes: %d\n", teenagerViewers);
    printf("Número de espectadores Adultos: %d\n", adultViewers);
    printf("Número de espectadores Idosos: %d\n\n\n", seniorViewers);

    // Asking if the user would like to see more info about the viewers
    printf("Gostaria de ver mais informações sobre os espectadores do filme?\n Digite [S] para Sim e [N] para Não.\n");
    scanf("%c", &moreInfo);
    moreInfo = toupper(moreInfo);
    fflush(stdin);

    if (moreInfo == 'S')
    {
        system("clear");

        printf("Número de espectadores homens e maiores de idade: %d\n", eighteenAndMale);
        printf("Número de espectadores mulheres e maiores de idade: %d\n", eighteenAndFemale);
        return 0; // returning values to the main function
    }
    else
    {
        return 0;
    }
}
