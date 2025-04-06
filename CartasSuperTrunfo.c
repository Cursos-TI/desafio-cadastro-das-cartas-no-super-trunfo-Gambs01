#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
 //Definindo variáveis para os atributos da cidade
    char estado1;
    char codigo_cidade1[30];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int npt1;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
//Recebendo os dados sobre a cidade 1 do jogador
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
        
    // Exibição dos Dados das Cartas:
//Exibição dos dados da carta 1 
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_cidade1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área total em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Total de pontos turísticos: %d\n", npt1);
    
    
   
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
