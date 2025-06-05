#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    int pontosTuristicos1, pontosTuristicos2, opcao;
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

    // escolha dos atributos

    printf("-----Escolha uma opção (atributo)-----\n");
    printf("1. Para selecionar a população\n");
    printf("2. Para selecionar a área\n");
    printf("3. Para selecionar o PIB\n");
    printf("4. Para selecionar o número de pontos turísticos\n");
    printf("5. Para selecionar a densidade demográfica\n");
    scanf("%d", &opcao);
   

    //comparando os atributos
   
switch (opcao){
case 1:
    printf("%s ou %s?\n", pais1, pais2);
    if (populacao1 > populacao2){      
        
        printf("População - %s: %lu\n",pais1, populacao1);
        printf("População - %s: %lu\n",pais2, populacao2);
        printf("Carta 1 venceu!\n");
    }
        else if (populacao1 < populacao2){
            printf("População - %s: %lu\n",pais1,  populacao1);
            printf("População - %s: %lu\n",pais2, populacao2);
            printf("Carta 2 venceu!\n");
        }
        else {
                printf("População - %s: %lu\n",pais1,  populacao1);
                printf("População - %s: %lu\n",pais2, populacao2);
                printf("Houve um empate\n");
        }
       
    break;

case 2:
        printf("%s ou %s?\n", pais1, pais2);
        if (area1 > area2){
        printf("Área - %s: %.2f km²\n",pais1, area1);
        printf("Área - %s: %.2f km²\n",pais2, area2);
        printf("Carta 1 venceu!\n");
    }   
         else if (area1 < area2){
              printf("Área - %s: %.2f km²\n",pais1, area1);
              printf("Área - %s: %.2f km²\n",pais2, area2);
              printf("Carta venceu!\n");
        }
        else  {
            printf("Área - %s: %.2f km²\n",pais1, area1);
            printf("Área - %s: %.2f km²\n",pais2, area2);
            printf("Houve um empate\n");
    }
       
    break;

case 3:
        printf("%s ou %s?\n", pais1, pais2);
        if (PIB1 > PIB2){
        printf("PIB - %s: %.2f bilhões de reais\n",pais1, PIB1);
        printf("PIB - %s: %.2f bilhões de reais\n",pais2, PIB2);
        printf("Carta1 venceu!\n");

    }   else if (PIB1 < PIB2){
        printf("PIB - %s: %.2f bilhões de reais\n",pais1, PIB1);
        printf("PIB - %s: %.2f bilhões de reais\n",pais2, PIB2);
        printf("Carta 2 venceu!\n"); 
    }
        else { 
        printf("PIB - %s: %.2f bilhões de reais\n",pais1, PIB1);
        printf("PIB - %s: %.2f bilhões de reais\n",pais2, PIB2);
        printf("Houve um empate\n");
                  
        }
    break;

case 4:
        printf("%s ou %s?\n", pais1, pais2);
        if (pontosTuristicos1 > pontosTuristicos2){
        printf("Pontos Turísticos - %s: %d\n",pais1,  pontosTuristicos1);
        printf("Pontos Turísticos - %s: %d\n",pais2, pontosTuristicos2);
        printf("Carta 1 venceu!\n");
    }   else if (pontosTuristicos1 < pontosTuristicos2){
        printf("Pontos Turísticos - %s: %d\n",pais1,  pontosTuristicos1);
        printf("Pontos Turísticos - %s: %d\n",pais2, pontosTuristicos2);
        printf("Carta 2 venceu!\n");  
    }
        else {
        printf("Pontos Turísticos - %s: %d\n",pais1,  pontosTuristicos1);
        printf("Pontos Turísticos - %s: %d\n",pais2, pontosTuristicos2);      
        printf("Houve um empate\n");
    }
       
    break;

case 5:
        printf("%s ou %s?\n", pais1, pais2);
        if (densidadePopulacional1 < densidadePopulacional2){
        printf("Densidade Populacional - %s: %.2lf hab/km²\n",pais1, densidadePopulacional1);
        printf("Densidade Populacional - %s: %.2lf hab/km²\n",pais2, densidadePopulacional2);
        printf("Carta 1 venceu!\n");
    }   else if (densidadePopulacional1 > densidadePopulacional2){
        printf("Densidade Populacional - %s: %.2lf hab/km²\n",pais1, densidadePopulacional1);
        printf("Densidade Populacional - %s: %.2lf hab/km²\n",pais2, densidadePopulacional2);
        printf("Carta 2 venceu!\n");
        }
        else {
        printf("Densidade Populacional - %s: %.2lf hab/km²\n",pais1, densidadePopulacional1);
        printf("Densidade Populacional - %s: %.2lf hab/km²\n",pais2, densidadePopulacional2);
        printf("Houve um empate\n");
    }
                    
    break;
    default:
    printf("Opção inválida!\n");
   }
   return 0;
}
    