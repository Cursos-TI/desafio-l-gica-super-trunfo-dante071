#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* Desafio: Nivel Mestre
Tema 2 - Super Trunfo, Desenvolvendo a Lógica do Jogo
Finalizando o desafio com o resultado final do jogo
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
    int comparar;
    int atributo1, atributo2;
    int resultado1 = 0, resultado2 = 0;
    int soma1, soma2;

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
    superPoder1 = (float) (populacao1 + area1 + pontosturisticos1 + pibpercapita1 + inversoDensidade1 + pib1);

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
    superPoder2 = (float) (populacao2 + area2 + pontosturisticos2 + pibpercapita2 + inversoDensidade2 + pib2);

    printf("Super Poder: %f \n", superPoder2);

    //Criando o menu do jogo
    printf("\n====== Bem vindo ao jogo Super Trunfo ======\n");
    printf("Você devera escolher 2 atributos diferentes.\n");

    printf("\nEscolha o primeiro atributo para comparação: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Pib per capita\n");
    printf("7. Super Poder\n");
    printf("Digite uma opção: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo para comparação: \n");
    printf("Atenção: Escolha um atributo diferente do primeiro!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Pib per capita\n");
    printf("7. Super Poder\n");
    printf("Digite uma opção: ");
    scanf("%d", &atributo2);

    // Verifica se o usuário escolheu o mesmo atributo para comparar
    if(atributo1 == atributo2){
        printf("\nVocê escolheu o mesmo atributo!\n");
        return 0;
    // Verifica se a escolha do segundo atributo é válida (deve ser entre 1 e 7)
    } else if (atributo2 < 1 || atributo2 > 7){
        printf("\nOpção de jogo inválida!\n");
        return 0;
    } else { 
    
    // Inicia o switch para comparar os atributos escolhidos
    switch (atributo1){
    case 1:
        printf("\nVocê escolheu a opção: 1. População\n");
        resultado1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("População: %lu\n", populacao1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("População: %lu\n\n", populacao2);

        break;

    case 2:
        printf("\nVocê escolheu a opção: 2. Área\n");
        resultado1 = (area1 > area2) ? 1 : (area1 < area2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Área: %.2f Km²\n", area1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("Área: %.2f Km²\n\n", area2);
        
        break;

    case 3:
        printf("\nVocê escolheu a opção: 3. PIB\n");
        resultado1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("PIB: %.2lf bilhões de reais\n", pib1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("PIB: %.2lf bilhões de reais\n\n", pib2);
        
        break;

    case 4:
        printf("\nVocê escolheu a opção: 4. Pontos Turísticos\n");
        resultado1 = (pontosturisticos1 > pontosturisticos2) ? 1 : (pontosturisticos1 < pontosturisticos2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Pontos Turísticos: %d\n", pontosturisticos1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("Pontos Turísticos: %d\n\n", pontosturisticos2);
        
        break;

    case 5:
        printf("\nVocê escolheu a opção: 5. Densidade Demográfica\n");
        resultado1 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);

        break;
    
    case 6:
        printf("\nVocê escolheu a opção: 6. Pib per capita\n");
        resultado1 = (pibpercapita1 > pibpercapita2) ? 1 : (pibpercapita1 < pibpercapita2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("PIB per Capita: %.2f reais\n", pibpercapita1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("PIB per Capita: %.2f reais\n\n", pibpercapita2);
        
        break;

    case 7:
        printf("\nVocê escolheu a opção: 7. Super Poder\n");
        resultado1 = (superPoder1 > superPoder2) ? 1 : (superPoder1 < superPoder2) ? 0 : -1;
        
        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Super Poder: %f\n", superPoder1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("Super Poder: %f\n\n", superPoder2);
        
        break;

    default:
        printf("\nOpção de jogo inválida!\n");
        return 0;
        break;
    }

    // Inicia o switch para comparar os atributos escolhidos na segunda opção 
    switch (atributo2){
        case 1:
        printf("\nVocê escolheu a opção: 1. População\n");
        resultado2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("População: %lu\n", populacao1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("População: %lu\n\n", populacao2);

        break;

    case 2:
        printf("\nVocê escolheu a opção: 2. Área\n");
        resultado2 = (area1 > area2) ? 1 : (area1 < area2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Área: %.2f Km²\n", area1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("Área: %.2f Km²\n\n", area2);
        
        break;

    case 3:
        printf("\nVocê escolheu a opção: 3. PIB\n");
        resultado2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("PIB: %.2lf bilhões de reais\n", pib1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("PIB: %.2lf bilhões de reais\n\n", pib2);
        
        break;

    case 4:
        printf("\nVocê escolheu a opção: 4. Pontos Turísticos\n");
        resultado2 = (pontosturisticos1 > pontosturisticos2) ? 1 : (pontosturisticos1 < pontosturisticos2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Pontos Turísticos: %d\n", pontosturisticos1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("Pontos Turísticos: %d\n\n", pontosturisticos2);
        
        break;

    case 5:
        printf("\nVocê escolheu a opção: 5. Densidade Demográfica\n");
        resultado2 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);

        break;
    
    case 6:
        printf("\nVocê escolheu a opção: 6. Pib per capita\n");
        resultado2 = (pibpercapita1 > pibpercapita2) ? 1 : (pibpercapita1 < pibpercapita2) ? 0 : -1;

        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("PIB per Capita: %.2f reais\n", pibpercapita1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("PIB per Capita: %.2f reais\n\n", pibpercapita2);
        
        break;

    case 7:
        printf("\nVocê escolheu a opção: 7. Super Poder\n");
        resultado2 = (superPoder1 > superPoder2) ? 1 : (superPoder1 < superPoder2) ? 0 : -1;
        
        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Super Poder: %f\n", superPoder1);

        printf("Carta 2: %s (%s)\n", cidade2, estado2);
        printf("Super Poder: %f\n\n", superPoder2);
        
        break;

    default:
        printf("\nOpção de jogo inválida!\n");
        return 0;
        break;
        }
    }
    // Soma a quantidade de vitórias para a Carta 1
    soma1 = (resultado1 == 1 ? 1 : 0) + (resultado2 == 1 ? 1 : 0);
    // Soma a quantidade de empates para a Carta 1
    soma2 = (resultado1 == 0 ? 1 : 0) + (resultado2 == 0 ? 1 : 0);

    // Compara os resultados das duas cartas
    if (soma1 > soma2) {
        // Se a soma das vitórias da Carta 1 for maior que a da Carta 2, a Carta 1 venceu
        printf("\nA Carta 1 venceu!\n");
    } else if (soma2 > soma1) {
        // Se a soma das vitórias da Carta 2 for maior que a da Carta 1, a Carta 2 venceu
        printf("\nA Carta 2 venceu!\n");
    } else {
        // Se as somas forem iguais, o jogo empatou
        printf("\nO jogo empatou!\n");
    }

    return 0;

}