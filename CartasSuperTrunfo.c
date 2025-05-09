#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char jogarNovamente;
    
//Definindo variáveis para os atributos da carta 1 (npt means = numero de pontos turísticos)
    char estado1[3];                               
    char codigo_cidade1[5];
    char nome1[30];
    unsigned long int populacao1;                            //definindo variável para input dos atributos da carta 1 pelo jogador
    float area1;
    float pib1;
    int npt1;
    float densidadepopulacional1;
    float PIBpc1; 
    //nova variável para calcular o super poder carta 1
    float superPoder1;
    //variável para escolha do menu interativo
    int escolhaMenu1;
 
//Definindo variáveis para os atributos da carta 2 (npt means = numero de pontos turísticos)    
        char estado2[3];
        char codigo_cidade2[5];
        char nome2[30];
        unsigned long int populacao2;                         //definindo variável para input dos atributos da carta 2 pelo jogador
        float area2;
        float pib2;
        int npt2;
        float densidadepopulacional2; 
        float PIBpc2;   
        //nova variável para calcular o super poder carta 1
        float superPoder2;  
        int escolhaMenu2;

        //resultado da comparação
        int resultado1, resultado2;
        
        //Loop para jogar novamente
        do {
            #ifdef _WIN32
            system("cls");
            #else
            system("clear");
            #endif

//Recebendo os dados sobre a carta 1 do jogador
    printf("Digite o estado da cidade 1: \n"); //solicitando o input do estado
    scanf("%s", estado1);                     //input para a variável (estado1)

    printf("Digite o código da cidade: \n");   //solicitando o código da cidade
    scanf("%s", codigo_cidade1);               //input para a variável (codigo_cidade1)

    printf("Digite o nome da cidade: \n");     //solicitando o input do nome da cidade
    scanf("%s", nome1);                        //input para a variável (nome1)

    printf("Qual a população da cidade? \n");  //solicitando o input da populaçao da cidade 1
    scanf("%lu", &populacao1);                  //input para a variável (população1)

    printf("Qual a área total da cidade? \n"); //solicitando input da área total da cidade
    scanf("%f", &area1);                       //input para a variável (area1)

    printf("Qual o PIB da cidade? \n");        //solicitando input do PIB
    scanf("%f", &pib1);                        //input para a vaiável (pib1)

    printf("Quantos pontos turísticos tem na cidade? \n"); //solicitando input para pontos turísticos
    scanf("%d", &npt1);                                    //input para a variável (npt1)
   
    //calculando o valor das 2 novas variáveis da carta 1
    densidadepopulacional1 = (float) populacao1 / area1;
    PIBpc1 = (float) pib1 / populacao1;

//calculando variável superPoder1
    superPoder1 = area1 + (float) populacao1 + pib1 + (float) npt1 + PIBpc1 + (1 / densidadepopulacional1);    

//Recebendo dados sobre a carta 2 do jogador
        printf("Certo, agora vamos para a segunda cidade: \n\n");  //aviso para a etapa da carta 2

        printf("Digite o estado da cidade 2: \n");                 //solicitando input do estado da cidade 2
        scanf("%s", estado2);                                    //input para a variável (estado2)

        printf("Digite o código da cidade: \n");                   //solicitação input do código da cidade 2
        scanf("%s" , codigo_cidade2);                              //input para a variável (codigo_cidade2)

        printf("Qual é o nome da cidade? \n");                     //solicitação input do nome da cidade
        scanf("%s", nome2);                                        //input para a variável (nome2)

        printf("Qual é a população da cidade? \n");                //solicitação input para população da cidade 2
        scanf("%lu", &populacao2);                                  //input para a variável (população2)
  
        printf("Qual a área total da cidade? \n");                 //solicitação input para a área total da cidade
        scanf("%f", &area2);                                       //input para a variável (area2)

        printf("Qual o PIB da cidade? \n");                        //solicitação input para PIB da cidade 2
        scanf("%f", &pib2);                                        //input para a variável (pib2)

        printf("Qual o total de pontos turísticos da cidade? \n"); //solicitação para total de pontos turísticos da cidade 2
        scanf("%d", &npt2);                                        //input para a variável (npt2)

        //calculando o valor das 2 novas variáveis da carta 2
        densidadepopulacional2 = (float) populacao2 / area2;
        PIBpc2 = (float) pib2 / populacao2;

        //calculando variável superPoder2
        superPoder2 = area2 + (float) populacao2 + pib2 + (float) npt2 + PIBpc2 + (1 / densidadepopulacional2);

            // Consumir o caractere de nova linha deixado pelo scanf
        // Isso evita problemas na próxima leitura de caractere (jogarNovamente)
        while (getchar() != '\n');

//Exibição dos dados da carta 1 
    printf("\n\nCarta 1: \n");                                     //imprimindo carta a qual será exibida os dados 1
    printf("Estado: %s\n", estado1);                               //imprimindo valor da variável (estado1)
    printf("Código da carta: %s\n", codigo_cidade1);               //imprimindo valor da variável (codigo_cidade1)
    printf("Nome: %s\n", nome1);                                   //imprimindo valor da variável (nome1)
    printf("População: %lu\n", populacao1);                         //imprimindo valor da variável (populacao1)
    printf("Área total em km²: %.2f\n", area1);                    //imprimindo valor da variável (area1)
    printf("PIB: %.2f\n", pib1);                                   //imprimindo valor da variável (pib1)
    printf("Total de pontos turísticos: %d\n", npt1);            //imprimindo valor da variável (npt1)
    printf("Densidade Populacional: %.2f habitantes por km² \n", densidadepopulacional1); //imprimindo atualização de variável nova
    printf("PIB per Capita: %.2f\n", PIBpc1);                         //imprimindo a atualização de variável nova
    printf("** Super Poder da carta 1 **: %.2f\n\n", superPoder1);

//Exibição dos dados da carta 2
        printf("Carta 2: \n");                                     //imprimindo carta a qual será exibida os dados 2
        printf("Estado: %s\n", estado2);                           //imprimindo valor da variável (estado2)
        printf("Código da carta: %s\n", codigo_cidade2);           //imprimindo valor da variável (codigo_cidade2)
        printf("Nome: %s\n", nome2);                               //imprimindo valor da variável (nome2)
        printf("População: %lu\n", populacao2);                     //imprimindo valor da variável (população2)
        printf("Área total em km²: %.2f\n", area2);                //imprimindo valor da variável (area2)
        printf("PIB: %.2f\n", pib2);                               //imprimindo valor da variável (pib2)
        printf("Total de pontos turísticos: %d\n", npt2);          //imrpimindo valor da variável (npt2) 
        printf("Densidade Populacional: %.2f habitantes por km² \n", densidadepopulacional2); //imprimindo atualização de variável nova
        printf("PIB per Capita: %.2f\n", PIBpc2);     //imprimindo a atualização de variável nova
        printf("** Super Poder da carta 1 **: %.2f\n\n", superPoder2);

        //menu interativo para os jogadores decidirem qual atributo irão usar
        printf("*** Primeiro atributo para combate ***\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Número de pontos turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. Super poder.\n");
        printf("Escolha:  \n");
        scanf("%d", &escolhaMenu1);

        //switch para escolha 
        switch (escolhaMenu1)
        {
        case 1:
            printf("Você escolheu o atributo População!\n\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu o atributo Área!\n\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB!\n\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
        case 4:
            printf("Você escolheu o atributo Númeor de Pontos turísticos!\n\n");
            resultado1 = npt1 > npt2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade populacional!\n\n");
            resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu o atributo Super Poder!\n\n");
            resultado1 = superPoder1 > superPoder2 ? 1 : 0;
            break;        
        default:
            printf("Erro, opção inválida!!!");
            break;
        }

        printf("*** Segundo atributo para combate ***\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Número de pontos turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. Super poder.\n");
        printf("Escolha um atributo diferente do primeiro:  \n");
        scanf("%d", &escolhaMenu2);

        if (escolhaMenu1 == escolhaMenu2){
            printf("Você escolheu o mesmo atributo! Começe novamente...\n");
        } else {
            switch (escolhaMenu2)
            {
            case 1:
                printf("Você escolheu o atributo População!\n\n");
                resultado1 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                printf("Você escolheu o atributo Área!\n\n");
                resultado1 = area1 > area2 ? 1 : 0;
                break;
            case 3:
                printf("Você escolheu o atributo PIB!\n\n");
                resultado1 = pib1 > pib2 ? 1 : 0;
            case 4:
                printf("Você escolheu o atributo Número de pontos turísticos!\n\n");
                resultado1 = npt1 > npt2 ? 1 : 0;
                break;
            case 5:
                printf("Você escolheu o atributo Densidade populacional!\n\n");
                resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
                break;
            case 6:
                printf("Você escolheu o atributo Super poder!\n\n");
                resultado1 = superPoder1 > superPoder2 ? 1 : 0;
                break;        
            default:
                printf("Erro, opção inválida!!!");
                break;
            }
        }
        
        printf("\n--- Resultados dos Atributos Escolhidos ---\n");

            // Exibe o primeiro atributo escolhido e seus valores
            printf("Primeiro Atributo %s: ", nome1); // Mostra de quem é a carta 1
            switch (escolhaMenu1) {
                case 1: printf("População (%lu)\n%s: População (%lu)\n\n", populacao1, nome2, populacao2); break;
                case 2: printf("Área (%.2f)\n%s: Área (%.2f)\n\n", area1, nome2, area2); break;
                case 3: printf("PIB (%.2f)\n%s: PIB (%.2f)\n\n", pib1, nome2, pib2); break;
                case 4: printf("Número de pontos turísticos (%d)\n%s: Número de pontos turísticos (%d)\n\n", npt1, nome2, npt2); break; // Corrigido typo
                case 5: printf("Densidade Populacional (%.2f)\n%s: Densidade Populacional (%.2f)\n\n", densidadepopulacional1, nome2, densidadepopulacional2); break; // Use %lf para double, %.2lf para 2 casas decimais
                case 6: printf("Super poder (%.2f)\n%s: Super poder (%.2f)\n\n", superPoder1, nome2, superPoder2); break;
                default: printf("Atributo inválido!\n\n"); // Deve ser tratado antes, mas bom ter um fallback
            }

            // Exibe o primeiro atributo escolhido e seus valores
            printf("Primeiro Atributo %s: ", nome1); // Mostra de quem é a carta 1
            switch (escolhaMenu2) {
                case 1: printf("População (%lu)\n%s: População (%lu)\n\n", populacao1, nome2, populacao2); break;
                case 2: printf("Área (%.2f)\n%s: Área (%.2f)\n\n", area1, nome2, area2); break;
                case 3: printf("PIB (%.2f)\n%s: PIB (%.2f)\n\n", pib1, nome2, pib2); break;
                case 4: printf("Número de pontos turísticos (%d)\n%s: Número de pontos turísticos (%d)\n\n", npt1, nome2, npt2); break; // Corrigido typo
                case 5: printf("Densidade Populacional (%.2f)\n%s: Densidade Populacional (%.2f)\n\n", densidadepopulacional1, nome2, densidadepopulacional2); break; // Use %lf para double, %.2lf para 2 casas decimais
                case 6: printf("Super poder (%.2f)\n%s: Super poder (%.2f)\n\n", superPoder1, nome2, superPoder2); break;
                default: printf("Atributo inválido!\n"); // Deve ser tratado antes, mas bom ter um fallback
            }

        if (resultado1 && resultado2){
            printf("*** %s VS %s ***\n\n", nome1, nome2);
            printf("A cidade (%s) Venceu!!!\n", nome1);
        } else if (resultado1 != resultado2){
            printf("*** %s VS %s ***\n\n", nome1, nome2);
            printf("Houve um empate!\n");
        } else {
            printf("*** %s VS %s ***\n\n", nome1, nome2);
            printf("A cidade (%s) ganhou!!\n", nome2);  
        }

        printf("Deseja jogar novamente? (S/N): ");
        scanf(" %c", &jogarNovamente); // Adicionado um espaço antes de %c para consumir qualquer whitespace pendente

    } while (jogarNovamente == 's' || jogarNovamente == 'S'); // Condição do loop: continua se o jogador digitar 's' ou 'S'

    printf("Obrigado por jogar!\n"); // Mensagem final após sair do loop

    system("pause");

    return 0; 
}
