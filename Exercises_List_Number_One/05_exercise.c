#include <stdio.h>

int main()
{

    int metrosParaConstruir;
    int rolos;
    int metrosAvulso;

    printf("Qual a quantidade de metros a serem construidas?\n");
    scanf("%d", &metrosParaConstruir);

    rolos = metrosParaConstruir / 50;

    metrosAvulso = metrosParaConstruir % 50;

    printf("E necessario %d rolos e %d metro(s) avulso.", rolos, metrosAvulso);
}