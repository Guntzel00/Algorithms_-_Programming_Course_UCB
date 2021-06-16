#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, maior_idade, idade;
    char sexo, cor_olho[10], cor_cabelo[10];
    float habitante_fem_padrao, porcentagem;

    printf("---------------Por favor! Responda esta pesquisa corretamente.Para finaliza-la informe a idade (-1)---------------------\n");
    do
    {
        printf("Informe o sexo da pessoa %d |F|- feminino ou |M|- masculino: ", i);
        scanf("%c", &sexo);
        fflush(stdin);
        sexo = toupper(sexo);
        printf("Informe a cor do olho da pessoa %d |AZUL| |VERDE| |CASTANHO| |PRETO|: ", i);
        fgets(cor_olho, 10, stdin);
        fflush(stdin);
        printf("Informe a cor do cabelo da pessoa %d |LOIRO| |CASTANHO| |PRETO|: ", i);
        fgets(cor_cabelo, 10, stdin);
        fflush(stdin);
        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        fflush(stdin);

        if ((idade >= 18 || idade <= 35) && sexo == 'F' && strcmp(cor_olho, "verde") == 1 && strcmp(cor_cabelo, "loiro") == 1)
            habitante_fem_padrao++;

        if (i == 1)
            maior_idade = idade;
        if (maior_idade < idade)
            maior_idade = idade;

        i++;
    } while (idade > 1);
    porcentagem = (habitante_fem_padrao / (i - 1)) * 100;

    printf("Obrigado por contribuir com a pesquisa!\n");
    printf("O/A habitante com a maior idade possui: %d anos.\n", maior_idade);
    printf("A porcentagem de habitantes do sexo feminino, com idade entre 18 e 35 anos, olho verde e cabelo loiro é de: %.1f %", porcentagem);

    return 0;
}