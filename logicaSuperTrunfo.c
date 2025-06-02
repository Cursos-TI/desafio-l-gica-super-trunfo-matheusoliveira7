#include <stdio.h>

int main(){
    // Declarando as váriaveis da Carta 1
    char carta1_estado;
    char carta1_codigo[3];
    char carta1_nomeCidade[20];
    int carta1_populacao, carta1_numeroPontosTuristicos;
    float carta1_area, carta1_pib, carta1_densidadePopulacional, carta1_pibPerCapita;

    // Declarando as váriaveis da Carta 2
    char carta2_estado;
    char carta2_codigo[3];
    char carta2_nomeCidade[20];
    int carta2_populacao, carta2_numeroPontosTuristicos;
    float carta2_area, carta2_pib, carta2_densidadePopulacional, carta2_pibPerCapita;

    // Cadastrando a Carta 1
    printf("CADASTRO DA CARTA 1\n-------------------\n");

    // Lendo as informações da Carta 1
    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf("%c", &carta1_estado);
    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", carta1_codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta1_nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &carta1_populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &carta1_area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1_pib);
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &carta1_numeroPontosTuristicos);

    // Calculando densidade populacional da carta 1
    carta1_densidadePopulacional = (float)carta1_populacao / carta1_area;

    // Calculando PIB per Capita da carta 1
    carta1_pibPerCapita = (carta1_pib * 1000000000) / (float)carta1_populacao;

    // Mostrando na tela as informações cadastradas da Carta 1
    printf("\n-------------------\nCarta 1:\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Código: %s\n", carta1_codigo);
    printf("Nome da Cidade: %s\n", carta1_nomeCidade);
    printf("População: %d\n", carta1_populacao);
    printf("Área: %.2f km²\n", carta1_area);
    printf("PIB: %.2f bilhões de reais\n", carta1_pib);
    printf("Número de Pontos Turísticos: %d\n", carta1_numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1_densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1_pibPerCapita);

    // Cadastrando a Carta 2
    printf("\nCADASTRO DA CARTA 2\n-------------------\n");

    // Lendo as informações da Carta 2
    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &carta2_estado);
    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", carta2_codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta2_nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &carta2_populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &carta2_area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta2_pib);
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &carta2_numeroPontosTuristicos);

    // Calculando densidade populacional da carta 2
    carta2_densidadePopulacional = (float)carta2_populacao / carta2_area;

    // Calculando PIB per Capita da carta 2
    carta2_pibPerCapita = (carta2_pib * 1000000000) / (float)carta2_populacao;

    // Mostrando na tela as informações cadastradas da Carta 2
    printf("\n-------------------\nCarta 2:\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Código: %s\n", carta2_codigo);
    printf("Nome da Cidade: %s\n", carta2_nomeCidade);
    printf("População: %d\n", carta2_populacao);
    printf("Área: %.2f km²\n", carta2_area);
    printf("PIB: %.2f bilhões de reais\n", carta2_pib);
    printf("Número de Pontos Turísticos: %d\n", carta2_numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2_densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2_pibPerCapita);

    // Realizando a comparação do atributo PIB entre a carta 1 e carta 2
    printf("\nComparação de cartas (Atributo: PIB): \n\n");
    printf("Carta 1 - %s: %.2f bilhões de reais\n", carta1_nomeCidade, carta1_pib);
    printf("Carta 2 - %s: %.2f bilhões de reais\n", carta2_nomeCidade, carta2_pib);

    if (carta1_pib > carta2_pib){
        printf("Resultado: Carta 1 (%s) venceu!", carta1_nomeCidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", carta2_nomeCidade);
    }
    
    return 0;
}