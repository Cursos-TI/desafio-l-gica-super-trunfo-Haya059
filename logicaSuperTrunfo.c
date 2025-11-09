#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char codigoEstado1, codigoEstado2;
    char codigoCarta1[4], codigoCarta2[4]; // Variável com array para armazenar todos os caracteres inseridos
    char nomeEstado1[50], nomeEstado2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Digite o código do estado da sua carta: ");
    scanf("%c", &codigoEstado1);

    printf("Digite o código do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome do estado, sem espaços: ");
    scanf("%s", nomeEstado1);

    printf("Digite o número da população do seu estado: ");
    scanf("%d", &populacao1);

    printf("Digite a área, em km², do seu estado: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB do seu estado: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da sua cidade: ");
    scanf("%d", &pontosTuristicos1);

    float densidadePopulacional1 = populacao1 / area1;
    float pibperCapita1 = (pib1 * 1000000000) / populacao1;

    //Exibição dos dados obtidos da carta 1
    printf("\nCarta 1: \n");
    printf("Código do Estado: %c\n", codigoEstado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome do Estado: %s\n", nomeEstado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibperCapita1);

    printf("\nDigite o código do estado da sua nova carta: ");
    scanf(" %c", &codigoEstado2);

    printf("Digite o código do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome do estado, sem espaços: ");
    scanf("%s", nomeEstado2);

    printf("Digite o número da população do seu estado: ");
    scanf("%d", &populacao2);

    printf("Digite a área, em km², do seu estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB do seu estado: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da sua cidade: ");
    scanf("%d", &pontosTuristicos2);

    float densidadePopulacional2 = populacao2 / area2;
    float pibperCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados obtidos da carta 2
    printf("\nCarta 2: \n");
    printf("Código do Estado: %c\n", codigoEstado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome do Estado: %s\n", nomeEstado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibperCapita2);



    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if (populacao1 > populacao2){
        printf("\nA População da carta 1 é maior!\n");
    } else {
        printf("A população da carta 2 é maior!\n");
    }

    if (area1 > area2){
        printf("A Área da carta 1 é maior!\n");
    } else {
        printf("A Área da carta 2 é maior!\n");
    }

    if (pib1 > pib2){
        printf("O PIB da carta 1 é maior!\n");
    } else {
        printf("O PIB da carta 2 é maior!\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("A cidade 1 tem mais pontos turísticos!\n");
    } else {
        printf("A cidade 2 tem mais pontos turísticos!\n");
    }

    if (densidadePopulacional1 > densidadePopulacional2){
        printf("A Densidade Populacional 1 é maior!\n");
    } else {
        printf("A Densidade Populacional 2 é maior!\n");
    }

    if (pibperCapita1 > pibperCapita2){
        printf("O PIB per Capita 1 é maior!\n");
    } else {
        printf("O PIB per Capita 2 é maior!\n");
    }

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
