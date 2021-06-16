#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float notas, notasFem, notasMasc, mediaFem, mediaMasc;
    int alunos, feminino = 0, masculino = 0;
    char sexo;

    printf("Quantos alunos tem na classe? ");
    scanf("%d", &alunos);
    fflush(stdin);
    printf("\nPrimeiramente informe o sexo do aluno(a) e em seguida a nota do mesmo(a).\n");
    notas = 0;
    notasFem = 0;
    notasMasc = 0;
    mediaFem = 0;
    mediaMasc = 0;
    for (int i = 1; i <= alunos; i++)
    {
        do
        {
            printf("\nO aluno(a) %d é do sexo masculino|M| ou feminino|F|? ", i);
            scanf("%c", &sexo);
            fflush(stdin);
            sexo = toupper(sexo);
        } while (sexo != 'F' && sexo != 'M');

        do
        {
            printf("\nInforme a nota desse aluno(a) |0| a |10|: ");
            scanf("%f", &notas);
            fflush(stdin);

        } while (notas < 0 && notas > 10);
        if (sexo == 'F')
        {
            feminino++;
            notasFem = notasFem + notas;
        }
        else if (sexo == 'M')
        {
            masculino++;
            notasMasc = notasMasc + notas;
        }
    }
    mediaFem = notasFem / feminino;
    mediaMasc = notasMasc / masculino;

    printf("A média de notas das meninas dessa classe é %.2f\n", mediaFem);
    printf("A média de notas dos meninos dessa classe é %.2f", mediaMasc);

    return 0;
}