#include <stdio.h>

/* Desafio: Nivel Novato
Tema 2 - Super Trunfo
Comparação de cartas e resultado (if e if-else)
*/

int main(){
    // Declarando variáveis para armazenar informações das cartas, incluindo estado, código, cidade, população, área em Km², PIB e pontos turísticos
    char estado1[50], estado2[50];
    char codcarta1[50], codcarta2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2; 
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float inversoDensidade1, inversoDensidade2;
    float pibpercapita1, pibpercapita2;
    double superPoder1, superPoder2;

    //Entrada de dados para a primeira carta
    printf("\n Cadastrando a Carta 1, digite as informações abaixo:\n");
    printf("Estado (Ex: SP,RJ,DF): ");
    scanf(" %s", estado1);

    printf("Código da carta (Ex: A01, A02, B01): ");
    scanf("%s", codcarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    //Entrada de dados para a segunda carta
    printf("\n Cadastrando a Carta 2, digite as informações abaixo:\n");
    printf("Estado (Ex: SP,RJ,DF): ");
    scanf(" %s", estado2);

    printf("Código da carta (Ex: A01, A02, B01): ");
    scanf("%s", codcarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2); 

    // Saída de dados da carta 1
    printf("\n Carta 01: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codcarta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2lf bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    //Exibindo informações adicionais da Carta 1
    densidade1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    pibpercapita1 = (float) pib1 * 1000000000 / populacao1;
    printf("Pib per Capita: %.2f reais \n", pibpercapita1);

    // Calcular Super Poder da carta 1 e exibindo
    inversoDensidade1 = 1 / densidade1;
    superPoder1 = (float) (populacao1 + area1 + pontosturisticos1 + pibpercapita1 + inversoDensidade1) + (pib1 * 1000000000);

    printf("Super Poder: %f \n", superPoder1);

    // Saída de dados da carta 2
    printf("\n Carta 02: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codcarta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2lf bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    //Exibindo informações adicionais da Carta 2
    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    pibpercapita2 = (float) pib2 * 1000000000 / populacao2;
    printf("Pib per Capita: %.2f reais \n", pibpercapita2);

    // Calcular Super Poder da carta 2 e exibindo
    inversoDensidade2 = 1 / densidade2;
    superPoder2 = (float) (populacao2 + area2 + pontosturisticos2 + pibpercapita2 + inversoDensidade2) + (pib2 * 1000000000);

    printf("Super Poder: %f \n", superPoder2);

    // Comparação das cartas e resultados
    //Populaão
    printf("\nComparação de cartas (Atributo: População)\n");
    printf("\nCarta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //Área
    printf("\nComparação de cartas (Atributo: Área)\n");
    printf("\nCarta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
    if (area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //PIB
    printf("\nComparação de cartas (Atributo: PIB)\n");
    printf("\nCarta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
    if (pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //Pontos Turísticos
    printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
    printf("\nCarta 1 - %s (%s): %d\n", cidade1, estado1, pontosturisticos1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    
    //Densidade Populacional
    printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
    printf("\nCarta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
    if (densidade1 < densidade2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //PIB per Capita
    printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
    printf("\nCarta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pibpercapita2);
    if (pibpercapita1 > pibpercapita2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //Super Poder
    printf("\nComparação de cartas (Atributo: Super Poder)\n");
    printf("\nCarta 1 - %s (%s): %.2f\n", cidade1, estado1, superPoder1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, superPoder2);
    if (superPoder1 > superPoder2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    
    return 0;

}