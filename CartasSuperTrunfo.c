#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
//Definindo variáveis para os atributos da carta 1 (npt means = numero de pontos turísticos)
    char estado1;                               
    char codigo_cidade1[30];
    char nome1[30];
    int populacao1;                            //definindo variável para input dos atributos da carta 1 pelo jogador
    float area1;
    float pib1;
    int npt1;
//2 novas variáveis da cidade 1(densidade populacional, PIB per capita)
    float densidadepopulacional1;
    float PIBpc1;   
 
//Definindo variáveis para os atributos da carta 2 (npt means = numero de pontos turísticos)    
        char estado2;
        char codigo_cidade2[30];
        char nome2[30];
        int populacao2;                         //definindo variável para input dos atributos da carta 2 pelo jogador
        float area2;
        float pib2;
        int npt2;

//2 novas variáveis da cidade 2(densidade populacional, PIB per capita)
float densidadepopulacional2; 
float PIBpc2;         

//Recebendo os dados sobre a carta 1 do jogador
    printf("Digite o estado da cidade 1: \n"); //solicitando o input do estado
    scanf("%c", &estado1);                     //input para a variável (estado1)

    printf("Digite o código da cidade: \n");   //solicitando o código da cidade
    scanf("%s", codigo_cidade1);               //input para a variável (codigo_cidade1)

    printf("Digite o nome da cidade: \n");     //solicitando o input do nome da cidade
    scanf("%s", nome1);                        //input para a variável (nome1)

    printf("Qual a população da cidade? \n");  //solicitando o input da populaçao da cidade 1
    scanf("%d", &populacao1);                  //input para a variável (população1)

    printf("Qual a área total da cidade? \n"); //solicitando input da área total da cidade
    scanf("%f", &area1);                       //input para a variável (area1)

    printf("Qual o PIB da cidade? \n");        //solicitando input do PIB
    scanf("%f", &pib1);                        //input para a vaiável (pib1)

    printf("Quantos pontos turísticos tem na cidade? \n"); //solicitando input para pontos turísticos
    scanf("%d", &npt1);                                    //input para a variável (npt1)
   
    //calculando o valor das 2 novas variáveis da carta 1
    densidadepopulacional1 = (float) populacao1 / area1;
    PIBpc1 = (float) pib1 / populacao1;

//Recebendo dados sobre a carta 2 do jogador
        printf("Certo, agora vamos para a segunda cidade: \n\n");  //aviso para a etapa da carta 2

        printf("Digite o estado da cidade 2: \n");                 //solicitando input do estado da cidade 2
        scanf(" %c", &estado2);                                    //input para a variável (estado2)

        printf("Digite o código da cidade: \n");                   //solicitação input do código da cidade 2
        scanf("%s" , codigo_cidade2);                              //input para a variável (codigo_cidade2)

        printf("Qual é o nome da cidade? \n");                     //solicitação input do nome da cidade
        scanf("%s", nome2);                                        //input para a variável (nome2)

        printf("Qual é a população da cidade? \n");                //solicitação input para população da cidade 2
        scanf("%d", &populacao2);                                  //input para a variável (população2)
  
        printf("Qual a área total da cidade? \n");                 //solicitação input para a área total da cidade
        scanf("%f", &area2);                                       //input para a variável (area2)

        printf("Qual o PIB da cidade? \n");                        //solicitação input para PIB da cidade 2
        scanf("%f", &pib2);                                        //input para a variável (pib2)

        printf("Qual o total de pontos turísticos da cidade? \n"); //solicitação para total de pontos turísticos da cidade 2
        scanf("%d", &npt2);                                        //input para a variável (npt2)

        //calculando o valor das 2 novas variáveis da carta 2
        densidadepopulacional2 = (float) populacao2 / area2;
        PIBpc2 = (float) pib2 / populacao2;

//Exibição dos dados da carta 1 
    printf("\n\nCarta 1: \n");                                     //imprimindo carta a qual será exibida os dados 1
    printf("Estado: %c\n", estado1);                               //imprimindo valor da variável (estado1)
    printf("Código da carta: %s\n", codigo_cidade1);               //imprimindo valor da variável (codigo_cidade1)
    printf("Nome: %s\n", nome1);                                   //imprimindo valor da variável (nome1)
    printf("População: %d\n", populacao1);                         //imprimindo valor da variável (populacao1)
    printf("Área total em km²: %.2f\n", area1);                    //imprimindo valor da variável (area1)
    printf("PIB: %.2f\n", pib1);                                   //imprimindo valor da variável (pib1)
    printf("Total de pontos turísticos: %d\n", npt1);            //imprimindo valor da variável (npt1)
    printf("Densidade Populacional: %.3f habitantes por quilômetro quadrado\n", densidadepopulacional1); //imprimindo atualização de variável nova
    printf("PIB per Capita: %f\n\n", PIBpc1);                         //imprimindo a atualização de variável nova

//Exibição dos dados da carta 2
        printf("Carta 2: \n");                                     //imprimindo carta a qual será exibida os dados 2
        printf("Estado: %c\n", estado2);                           //imprimindo valor da variável (estado2)
        printf("Código da carta: %s\n", codigo_cidade2);           //imprimindo valor da variável (codigo_cidade2)
        printf("Nome: %s\n", nome2);                               //imprimindo valor da variável (nome2)
        printf("População: %d\n", populacao2);                     //imprimindo valor da variável (população2)
        printf("Área total em km²: %.2f\n", area2);                //imprimindo valor da variável (area2)
        printf("PIB: %.2f\n", pib2);                               //imprimindo valor da variável (pib2)
        printf("Total de pontos turísticos: %d\n", npt2);          //imrpimindo valor da variável (npt2) 
        printf("Densidade Populacional: %.3f habitantes por quilômetro quadrado\n", densidadepopulacional2); //imprimindo atualização de variável nova
        printf("PIB per Capita: %f\n", PIBpc2);                         //imprimindo a atualização de variável nova
    return 0;
}
