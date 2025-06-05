#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //variáveis das cartas
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; //alterado para unsigned long int
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float PIB1, PIB2;
    double densidadePopulacional1, densidadePopulacional2;
    double PIBperCapta1, PIBperCapta2;
    float superPoder1, superPoder2; //nova variável super poder
    char pais1[20], pais2[20];
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    //entrada de dados
    printf("---Carta1---\n");

    printf("Digite o país: ");
    scanf("%s", pais1);
    
    printf("Digite o estado: ");
    scanf("%s", estado1);  

    printf("Digite o código da carta onde o código é a primeiro letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo1);

    printf("Digite a sua cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite sua área (km²): ");
    scanf("%f", &area1);

    printf("Digite seu PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    //calculo da densidade populacional
    densidadePopulacional1 = (double) populacao1/area1;
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional1);

    //cálculo do PIB percapta
    PIBperCapta1 = (double) (PIB1 * 1e9)/populacao1; //convertendo de bilhões de reais para reais
    printf("PIB per capta: %.2lf reais\n", PIBperCapta1);

    //somando o super poder

    superPoder1 = (float) populacao1 + area1 + PIB1 + (float) pontosTuristicos1 + PIBperCapta1 + (1.0 / densidadePopulacional1);

    //Entrada de dados da Carta 2

    printf("---Carta2---\n");

    printf("Digite o país: ");
    scanf("%s", pais2);
    
    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta onde o código é a primeiro letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo2);

    printf("Digite a sua cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite sua área (km²): ");
    scanf("%f", &area2);

    printf("Digite seu PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);
    
    //calculo da densidade populacional
    densidadePopulacional2 = (double) populacao2/area2;
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);

    //cálculo do PIB percapta
    PIBperCapta2 = (double) (PIB2 * 1e9)/populacao2; //convertendo de bilhoes de reais para reais
    printf("PIB per capta: %.2lf reais\n", PIBperCapta2);

    superPoder2 = (float) populacao2 + area2 + PIB2 + (float) pontosTuristicos2 + PIBperCapta2 + (1.0 / densidadePopulacional2);

    //exibição das cartas
    printf("\n--- Dados das Cartas ---\n");

    //Carta1
    printf("\nCarta 1\n");
    printf("País: %s\n", pais1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2lf reais\n", PIBperCapta1); 
    
    //Carta2
     printf("\nCarta 2\n");
      printf("País: %s\n", pais2);
     printf("Estado: %s\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %lu\n", populacao2);
     printf("Pontos Turísticos: %d\n", pontosTuristicos2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", PIB2);
     printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);
     printf("PIB per capita: %.2lf reais\n", PIBperCapta2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

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
    //comparação entre as cartas por atributos
     //População

    printf("---Comparação de Cartas (Atributo: População):---\n");
    printf("Carta1 - %s (%s): %lu\n", estado1, cidade1, populacao1);
    printf("Carta2 - %s (%s): %lu\n", estado2, cidade2,populacao2);
        if(populacao1 > populacao2) {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }

    //Pontos turísticos

    printf("---Comparação de Cartas (Atributo: Pontos Turísticos):---\n");
    printf("Carta1 - %s (%s): %d\n",estado1, cidade1, pontosTuristicos1);
    printf("Carta2 - %s (%s): %d\n",estado2, cidade2, pontosTuristicos2);
        if(pontosTuristicos1 > pontosTuristicos2) {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }   

    //área

    printf("---Comparação de Cartas (Atributo: área):---\n");
    printf("Carta1 - %s (%s): %.2f km²\n",estado1, cidade1, area1);
    printf("Carta2 - %s (%s): %.2f km²\n",estado2, cidade2, area2);
        if(area1 > area2) {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }

    //PIB
    printf("---Comparação de Cartas (Atributo: PIB):---\n");
    printf("Carta1 - %s (%s): %.2f bilhões de reais\n",estado1, cidade1, PIB1);
    printf("Carta2 - %s (%s): %.2f bilhões de reais\n",estado2, cidade2, PIB2);
        if(PIB1 > PIB2) {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }

    //Densidade Populacional
    printf("---Comparação de Cartas (Atributo: Densidade Populacional):---\n");
    printf("Carta1 - %s (%s): %.2lf hab/km²\n",estado1, cidade1, densidadePopulacional1);
    printf("Carta2 - %s (%s): %.2lf hab/km²\n",estado2, cidade2, densidadePopulacional2);
        if(densidadePopulacional1 < densidadePopulacional2) {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }

    //PIB per capta
    printf("---Comparação de Cartas (Atributo: PIB per capta):---\n");
    printf("Carta1 - %s (%s): %.2lf reais\n",estado1, cidade1, PIBperCapta1);
    printf("Carta2 - %s (%s): %.2lf reais\n",estado2, cidade2, PIBperCapta2);
        if(PIBperCapta1 > PIBperCapta2) {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }

    return 0;
}
