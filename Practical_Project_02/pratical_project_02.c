/* 
Nome Completo: Gustavo Guntzel de Souza
Matricula: UC204214634
Curso: Algoritimos de programacao 
*/

// - Nome do destino;
// - Quantidade de assentos (>= 90 && <= 200);
// - Valor da passagem/reserva, em reais;

//           Menu
// - Verificar a ocupação do Destino (mapa do avião);
// - Efetuar uma reserva;
// - Confirmar uma reserva;
// - Cancelar uma reserva;
// - Relatório;

//           Regras

// - Podem ser confirmadas ou canceladas as reservas;
// - Passageiros até 5 anos tem 50% de desconto;

//Impotando bibliotecas necessrias
#include <stdio.h>
#include <ctype.h>  //biblioteca com funções para mudar caps de letras
#include <stdlib.h> //biblioteca para comandos do prompt
#include <locale.h> // biblioteca para utilizar acentuação
#include <string.h> //biblioteca para lidar com strings
int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomeDestino[30], menuInicial, destinoEscolhido;
    int numeroAssentos, opcoesDestino;
    float precoPassagem;

    do // do e while para a criacao menu principal
    {
        printf("-----------------------------------------------\n");
        printf("-----------------SALUMAR AEROLINEAS------------\n");
        printf("-----------------------------------------------\n\n");

        do // do e while para verificação de espacos em branco
        {
            printf("     Digite o nome do destino da viagem:\n\n");
            fgets(nomeDestino, 30, stdin);
            fflush(stdin);
            if (strlen(nomeDestino) <= 1)
            {
                printf("Por favor digite um nome valido.\n\n");
            }
        } while (strlen(nomeDestino) <= 1);

        system("cls");

        printf("-----------------------------------------------\n");
        printf("-----------------SALUMAR AEROLINEAS------------\n");
        printf("-----------------------------------------------\n\n");

        do // do e while para verificação de espacos em branco
        {
            printf("    Informe o valor unitario de cada bilhete:\n\n");
            scanf("%f", &precoPassagem);
            fflush(stdin);
            if (precoPassagem < 0)
                printf("\nPor favor digite um valor valido.\n");
        } while (precoPassagem < 0);

        system("cls");

        printf("-----------------------------------------------\n");
        printf("-----------------SALUMAR AEROLINEAS------------\n");
        printf("-----------------------------------------------\n\n");

        do
        {
            printf("Informe o numero de assentos no aviao:\n\n");
            scanf("%d", &numeroAssentos);
            fflush(stdin);
            if (numeroAssentos < 90 || numeroAssentos > 200)
                printf("\n Quantidade de assentos invalida!\n O aviao deve conter de 90 a 200 assentos.\n\n\n");
        } while (numeroAssentos < 90 || numeroAssentos > 200);

        // Declaracao de variaveis relacionadas a reserva de bilhetes
        int tempAssentos = 1, tempReserva = 1, tempReservasCanceladas, tempReservasConfirmadas, contadorConfirmada, contadorReservada, tempPassagensDisponiveis;
        int idadePassageiro[300], assentoReserva[numeroAssentos];
        char nomePassageiro[300][100], Assentos[numeroAssentos], descricaoReserva[300];
        char tempCancelamento, tempConfirmacao, saidaMenuCancelamento, saidaMenuConfirmacao;
        float valorTotalDaReserva[300], valorTotalPassagensConfirmadas, valorReservas;

        for (tempAssentos = 1; tempAssentos <= numeroAssentos; tempAssentos++)
        { // Criacao do mapa de assentos, sem valores armazenados
            Assentos[tempAssentos] = 'D';
        }

        system("cls");

        do // do e while para voltar ao menu do destino
        {
            printf("-----------------------------------------------\n");
            printf("-----------------SALUMAR AEROLINEAS------------\n");
            printf("-----------------------------------------------\n\n");
            printf("    Menu Inicial\n\n");
            printf("1 - Verificar ocupacao dos voos\n");
            printf("2 - Efetuar reserva\n");
            printf("3 - Cancelar reserva\n");
            printf("4 - Confirmar reserva\n\n");
            printf("5 - Cconsultar detalhes do destino\n");
            printf("6 - Sair do menu\n\n");
            printf("    Informe o destino desejado: ");
            scanf("%d", &opcoesDestino);

            system("cls");

            switch (opcoesDestino)
            {
            case 1:

                printf("-----------------------------------------------\n");
                printf("----------------SALUMAR AEROLINEAS-------------\n");
                printf("-----------------------------------------------\n\n");
                printf("    Mapa de assentos do voo\n\n");

                for (tempAssentos = 1; tempAssentos <= numeroAssentos; tempAssentos++) // Criação do mapa de assentos
                {
                    if (Assentos[tempAssentos] == 'D')
                        printf(" %d-\033[32;1m%c\033[0m", tempAssentos, Assentos[tempAssentos]);
                    else if (Assentos[tempAssentos] == 'R')
                        printf(" %d-\033[31;1m%c\033[0m", tempAssentos, Assentos[tempAssentos]);
                    else
                        printf(" %d-\033[94;1m%c\033[0m", tempAssentos, Assentos[tempAssentos]);
                }

                ;
                break;
            case 2:
                printf("-----------------------------------------------\n");
                printf("----------------SALUMAR AEROLINEAS-------------\n");
                printf("-----------------------------------------------\n\n");

                do
                {
                    fflush(stdin);
                    printf("Digite o nome do passageiro Nº %d: ", tempReserva); // Cadastrando o passageiro na reserva
                    fgets(nomePassageiro[tempReserva], 100, stdin);
                    fflush(stdin);
                    if (strlen(nomePassageiro[tempReserva]) <= 4) // A funcao strlen verifica o tamanho da string
                        printf("\nPor favor, digite um nome valido.\n");
                } while (strlen(nomePassageiro[tempReserva]) <= 4); // Repetição quando o nome for menor que 3 caracteres

                do
                {
                    fflush(stdin);
                    printf("\nDigite a idade do passageiro Nº %d: ", tempReserva);
                    scanf("%d", &idadePassageiro[tempReserva]);
                    fflush(stdin);
                    if (idadePassageiro[tempReserva] < 0 || idadePassageiro[tempReserva] > 115)
                        printf("\nPor favor, digite uma Idade valida\n");
                } while (idadePassageiro[tempReserva] < 0 || idadePassageiro[tempReserva] > 115);

                do
                {
                    fflush(stdin);
                    printf("\nDigite o assento do passageiro Nº %d: ", tempReserva);
                    scanf("%d", &assentoReserva[tempReserva]);
                    fflush(stdin);
                    if (assentoReserva[tempReserva] < 0 || assentoReserva[tempReserva] > numeroAssentos)
                        printf("\nPor favor, escolha um assento valido\n");
                    else
                    {
                        if (Assentos[assentoReserva[tempReserva]] != 'D')
                            printf("\nAssento nao disponivel, por favor escolha outro\n");
                    }
                } while ((assentoReserva[tempReserva] < 0 || assentoReserva[tempReserva] > numeroAssentos) || Assentos[assentoReserva[tempReserva]] != 'D');

                // Muda disponibilidade do assento para Reservado

                Assentos[assentoReserva[tempReserva]] = 'R';

                // Muda a disponibilidade do assento para Ativo

                descricaoReserva[tempReserva] = 'A';

                //Efetua desconto para menores de 5 anos
                if (idadePassageiro[tempReserva] < 6)
                    valorTotalDaReserva[tempReserva] = precoPassagem / 2;
                else
                    valorTotalDaReserva[tempReserva] = precoPassagem;

                printf("\n\nValor da passagem: R$ %.2f\n\n", valorTotalDaReserva[tempReserva]);
                printf("Codigo da reserva: %d\n\n", tempReserva);

                tempReserva++;

                ;
                break;
            case 3:
                printf("-----------------------------------------------\n");
                printf("----------------SALUMAR AEROLINEAS-------------\n");
                printf("-----------------------------------------------\n\n");

                do
                {
                    fflush(stdin);
                    printf("\nDigite o codigo da reserva a ser cancelada: ");
                    scanf("%d", &tempReservasCanceladas);
                    fflush(stdin);

                    if (descricaoReserva[tempReservasCanceladas] == 'I') // Consulta situacao da reserva
                        printf("\nDesculpe, sua reserva ja foi cancelada.\n");
                    else if (descricaoReserva[tempReservasCanceladas] == 'A' || descricaoReserva[tempReservasCanceladas] == 'C')
                        break;
                    else
                        printf("\nReserva inexistente, verifique o codigo\n");

                    printf("\nTentar outro codigo?[S|N]\n");
                    scanf("%c", &saidaMenuCancelamento);
                    fflush(stdin);

                    saidaMenuCancelamento = toupper(saidaMenuCancelamento);

                    if (saidaMenuCancelamento == 'N')
                        break;

                } while (descricaoReserva[tempReservasCanceladas] == 'I' || (descricaoReserva[tempReservasCanceladas] != 'A' || descricaoReserva[tempReservasCanceladas] != 'C'));

                if (saidaMenuCancelamento == 'N')
                    break;

                system("cls");

                printf("-----------------------------------------------\n");
                printf("----------------SALUMAR AEROLINEAS-------------\n");
                printf("-----------------------------------------------\n\n");

                printf("      Informacoes da reserva N° %d\n\n\n", tempReservasCanceladas); // Confirma dados antes de cancelar a reserva

                printf("Nome do passageiro: %s\n", nomePassageiro[tempReservasCanceladas]);
                printf("Idade do passageiro: %d\n", idadePassageiro[tempReservasCanceladas]);
                printf("Assento do passageiro: %d\n\n", assentoReserva[tempReservasCanceladas]);

                do
                {
                    fflush(stdin);
                    printf("Confirmar cancelamento? [S|N]\n\n");
                    scanf("%c", &tempCancelamento);

                    tempCancelamento = toupper(tempCancelamento);

                    if (tempCancelamento != 'S' && tempCancelamento != 'N')
                        printf("\nCaractere invalido");
                } while (tempCancelamento != 'S' && tempCancelamento != 'N');

                if (tempCancelamento == 'N')
                    break;
                else
                {
                    // Altera disponibilidade da reserva para Indisponivel ou Disponivel
                    descricaoReserva[tempReservasCanceladas] = 'I';

                    Assentos[assentoReserva[tempReservasCanceladas]] = 'D';
                }

                ;
                break;
            case 4:
                printf("-----------------------------------------------\n");
                printf("----------------SALUMAR AEROLINEAS-------------\n");
                printf("-----------------------------------------------\n\n");

                do
                {
                    fflush(stdin);
                    printf("\nDigite o codigo da reserva para confirmacao: ");
                    scanf("%d", &tempReservasConfirmadas);
                    fflush(stdin);
                    if (descricaoReserva[tempReservasConfirmadas] == 'I')
                        printf("\nReserva ja cancelada, tente outro codigo\n");
                    else if (descricaoReserva[tempReservasConfirmadas] == 'C')
                        printf("\nReserva confirmada, boa viagem\n");
                    else if (descricaoReserva[tempReservasConfirmadas] == 'A')
                        break;
                    else
                        printf("\nReserva inexistente, tente outro codigo\n");

                    printf("\nTentar outro codigo?[S|N]\n");
                    scanf("%c", &saidaMenuConfirmacao);
                    fflush(stdin);

                    saidaMenuConfirmacao = toupper(saidaMenuConfirmacao);

                    if (saidaMenuConfirmacao == 'N')
                        break;
                } while (descricaoReserva[tempReservasConfirmadas] == 'I' || (descricaoReserva[tempReservasConfirmadas] != 'A' || descricaoReserva[tempReservasConfirmadas] != 'C'));

                if (saidaMenuConfirmacao == 'N')
                    break;

                system("cls");

                printf("-----------------------------------------------\n");
                printf("----------------SALUMAR AEROLINEAS-------------\n");
                printf("-----------------------------------------------\n\n");

                printf("      Informacoes da reserva N° %d\n\n\n", tempReservasConfirmadas);

                printf("Nome do passageiro: %s\n", nomePassageiro[tempReservasConfirmadas]);
                printf("Idade do passageiro: %d\n", idadePassageiro[tempReservasConfirmadas]);
                printf("Assento do passageiro: %d\n\n", assentoReserva[tempReservasConfirmadas]);

                do
                {
                    fflush(stdin);
                    printf("Confirmar reserva? [S|N]\n\n");
                    scanf("%c", &tempConfirmacao);

                    tempConfirmacao = toupper(tempConfirmacao);

                    if (tempConfirmacao != 'S' && tempConfirmacao != 'N')
                        printf("\nCaractere invalido\n");
                } while (tempConfirmacao != 'S' && tempConfirmacao != 'N');

                if (tempConfirmacao == 'N')
                    break;
                else
                {
                    // Confirma a reserva
                    descricaoReserva[tempReservasConfirmadas] = 'C';

                    Assentos[assentoReserva[tempReservasConfirmadas]] = 'C';
                }

                ;
                break;
            case 5:
                printf("-----------------------------------------------\n");
                printf("----------------SALUMAR AEROLINEAS-------------\n");
                printf("-----------------------------------------------\n\n");

                printf("      RESUMO DO DESTINO - %s\n\n\n", nomeDestino);

                valorReservas = 0;
                valorTotalPassagensConfirmadas = 0;
                contadorReservada = 0;
                contadorConfirmada = 0;

                //Contador de numero de reservas e confirmacoes

                for (int i = 1; i <= numeroAssentos; i++)
                {

                    if (Assentos[i] == 'R')
                    {
                        contadorReservada++;
                    }

                    else if (Assentos[i] == 'C')
                    {
                        contadorConfirmada++;
                    }
                };

                for (int i = 1; i <= tempReserva; i++)
                {
                    if (descricaoReserva[i] == 'A')

                        valorReservas = valorReservas + valorTotalDaReserva[i]; //Soma os valores das passagens reservadas

                    else if (descricaoReserva[i] == 'C')
                    {

                        valorTotalPassagensConfirmadas = valorTotalPassagensConfirmadas + valorTotalDaReserva[i];
                    }
                };

                tempPassagensDisponiveis = (numeroAssentos - contadorConfirmada - contadorReservada);

                printf("Total de passagens reservadas: %d", contadorReservada);
                printf("\n\nTotal de passagens confirmadas: %d", contadorConfirmada);
                printf("\n\nTotal de passagens disponiveis: %d", tempPassagensDisponiveis);
                printf("\n\n\033[93;1mValor total de passagens reservadas: %.2f\033[0m", valorReservas);
                printf("\n\n\033[92;1mValor total de passagens confirmadas: %.2f\033[0m\n\n", valorTotalPassagensConfirmadas);

                system("pause");
                ;
                break;
            case 6:;
                break;
            default:
                printf("\nOpcao invalida\n");
            };

            if (opcoesDestino == 6)
                break;
            else
                do
                {
                    fflush(stdin);
                    printf("\n\n\n     Deseja voltar ao menu do destino?[S|N]\n\n\n"); // Opcao para voltar ao menu anterior
                    scanf("%c", &destinoEscolhido);
                    fflush(stdin);

                    destinoEscolhido = toupper(destinoEscolhido);

                    if (destinoEscolhido != 'S' && destinoEscolhido != 'N')
                        printf("\nCaractere invalido");
                } while (destinoEscolhido != 'S' && destinoEscolhido != 'N');

            system("cls");

        } while (destinoEscolhido == 'S');

        system("cls");

        if (opcoesDestino == 6)
            break;
        else
            do
            {
                fflush(stdin);
                printf("\nDeseja cadastrar outro destino?[S|N]\n"); // Opcao para cadastrar outro destino
                scanf("%c", &menuInicial);
                fflush(stdin);

                menuInicial = toupper(menuInicial);

                if (menuInicial != 'S' && menuInicial != 'N')
                    printf("\nCaractere invalido");
            } while (menuInicial != 'S' && menuInicial != 'N');

        system("cls");

    } while (menuInicial == 'S');

    system("cls");

    printf("-----------------------------------------------\n");
    printf("----------------SALUMAR AEROLINEAS-------------\n");
    printf("-----------------------------------------------\n\n");
    printf("Obrigado pela preferencia, volte sempre!\n\n");

    return 0;
}