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
    unsigned long int populacao1, populacao2, resultado1, resultado2; //alterado para unsigned long int
    int pontosTuristicos1, pontosTuristicos2, opcao1, opcao2;
    float area1, area2;
    float PIB1, PIB2;
    double densidadePopulacional1, densidadePopulacional2;
    double PIBperCapta1, PIBperCapta2;
    float superPoder1, superPoder2, soma1, soma2; //nova variável super poder
    char pais1[20], pais2[20];
    char primeiroAtributo, segundoAtributo;
   
    
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
    
    printf("Digite o seu estado com uma letra de A a H:");
    scanf("%s", estado1);  

    printf("Digite o código da carta onde o código é a letra do estado seguida de um número de 01 a 04:");
    scanf("%s", codigo1);

    printf("Digite a sua cidade:");
    scanf("%s", cidade1);

    printf("Digite a população:");
    scanf("%lu", &populacao1);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontosTuristicos1);

    printf("Digite sua área (km²):");
    scanf("%f", &area1);

    printf("Digite seu PIB (em bilhões de reais):");
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

    printf("---Carta 2---\n");

    printf("Digite o país: ");
    scanf("%s", pais2);
    
    printf("Digite o seu estado com uma letra de A a H:");
    scanf("%s", estado2);

    printf("Digite o código da carta onde o código é a letra do estado seguida de um número de 01 a 04:");
    scanf("%s", codigo2);

    printf("Digite a sua cidade:");
    scanf("%s", cidade2);

    printf("Digite a população:");
    scanf("%lu", &populacao2);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontosTuristicos2);

    printf("Digite sua área (km²):");
    scanf("%f", &area2);

    printf("Digite seu PIB (em bilhões de reais):");
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

    printf("-----Escolha a primeira opção (atributo)-----\n");
    printf("1. Para selecionar a população\n");
    printf("2. Para selecionar a área\n");
    printf("3. Para selecionar o PIB\n");
    printf("4. Para selecionar o número de pontos turísticos\n");
    printf("5. Para selecionar a densidade demográfica\n");
    scanf("%d", &opcao1);

    //comparando os atributos
   
switch (opcao1){
case 1:
    printf("Você escolheu a opção: População!\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;

case 2:
    printf("Você escolheu a opção: Área!\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;

case 3:
    printf("Você escolheu a opção: PIB!\n");
    resultado1 = PIB1 > PIB2 ? 1 : 0;   
    break;

case 4:
    printf("Você escolheu a opção: Pontos turísticos!\n");
    resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    break;

case 5:
    printf("Você escolheu a opção: Densidade demográfica!\n");
    resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
    break;
    default:
    printf("Opção inválida!\n");
   }

//escolhendo o segundo atributo
    printf("-----Escolha a segunda opção (atributo)-----\n");
    printf("Escolha um atributo diferente do primeiro!\n");
    printf("1. Para selecionar a população\n");
    printf("2. Para selecionar a área\n");
    printf("3. Para selecionar o PIB\n");
    printf("4. Para selecionar o número de pontos turísticos\n");
    printf("5. Para selecionar a densidade demográfica\n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) 
        {
        printf("Você escolheu o mesmo atributo!");
        } else {
            switch (opcao2)
            {
            case 1:
             printf("Você escolheu a opção: População!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;

            case 2:
            printf("Você escolheu a opção: Área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;

            case 3:
            printf("Você escolheu a opção: PIB!\n");
            resultado2 = PIB1 > PIB2 ? 1 : 0;   
            break;

            case 4:
            printf("Você escolheu a opção: Pontos turísticos!\n");
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;

            case 5:
            printf("Você escolheu a opção: Densidade demográfica!\n");
            resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            break;
            default:
            printf("Opção inválida!\n");
         }
            soma1 = opcao1 + opcao2;
            printf("%.2f\n", soma1);

            if(resultado1 > resultado2)
            {
                printf("A carta 1 venceu!\n");
            } else if (resultado1 < resultado2)
            {
                    printf("A carta 2 venceu!\n");
            } else 
            {
                    printf("A carta 1 é = a carta 2!\n");
            }
        }
        

   return 0;
}

  
    