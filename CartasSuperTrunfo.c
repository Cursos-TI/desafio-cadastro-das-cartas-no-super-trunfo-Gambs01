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
    int populacao1;
    float area1;
    float pib1;
    int npt1;

//Definindo variáveis para os atributos da carta 2 (npt means = numero de pontos turísticos)    
        char estado2;
        char codigo_cidade2[30];
        char nome2[30];
        int populacao2;
        float area2;
        float pib2;
        int npt2;

//Recebendo os dados sobre a carta 1 do jogador
    printf("Digite o estado da cidade 1: \n");
    scanf("%c", &estado1);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_cidade1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao1);

    printf("Qual a área total da cidade? \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem na cidade? \n");
    scanf("%d", &npt1);
        
//Recebendo dados sobre a carta 2 do jogador
        printf("Certo, agora vamos para a segunda cidade: \n\n");

        printf("Digite o estado da cidade 2: \n");
        scanf(" %c", &estado2);

        printf("Digite o código da cidade: \n");
        scanf("%s" , codigo_cidade2);

        printf("Qual é o nome da cidade? \n");
        scanf("%s", nome2);

        printf("Qual é a população da cidade? \n");
        scanf("%d", &populacao2);

        printf("Qual a área total da cidade? \n");
        scanf("%f", &area2);

        printf("Qual o PIB da cidade? \n");
        scanf("%f", &pib2);

        printf("Qual o total de pontos turísticos da cidade? \n");
        scanf("%d", &npt2);

//Exibição dos dados da carta 1 
    printf("\n\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_cidade1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área total em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Total de pontos turísticos: %d\n\n", npt1);

//Exibição dos dados da carta 2
        printf("Carta 2: \n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %s\n", codigo_cidade2);
        printf("Nome: %s\n", nome2);
        printf("População: %d\n", populacao2);
        printf("Área total em km²: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Total de pontos turísticos: %d\n", npt2);            

    return 0;
}
