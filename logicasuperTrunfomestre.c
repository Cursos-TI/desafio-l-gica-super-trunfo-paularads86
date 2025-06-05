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
    unsigned long int populacao1, populacao2, resultado1, resultado2; //alterado para unsigned long int
    int pontosTuristicos1, pontosTuristicos2, opcao1, opcao2;
    float area1, area2;
    float PIB1, PIB2;
    double densidadePopulacional1, densidadePopulacional2;
    double PIBperCapta1, PIBperCapta2;
    float soma1, soma2, valor1_a, valor1_b, valor2_a, valor2_b; 
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

    //Entrada de dados da Carta 2

    printf("---Carta 2---\n");

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

    //exibição das cartas
    printf("\n--- Dados das Cartas ---\n");

    //Carta1
    printf("\nCarta 1\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional1);
    
    
    //Carta2
     printf("\nCarta 2\n");
     printf("Cidade: %s\n", cidade2);
     printf("População: %lu\n", populacao2);
     printf("Pontos Turísticos: %d\n", pontosTuristicos2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", PIB2);
     printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);
     
   
    // escolha dos atributos

    printf("\n-----Escolha a primeira opção (atributo)-----\n");
    printf("1. Para selecionar a população\n");
    printf("2. Para selecionar a área\n");
    printf("3. Para selecionar o PIB\n");
    printf("4. Para selecionar o número de pontos turísticos\n");
    printf("5. Para selecionar a densidade demográfica\n");
    scanf("%d", &opcao1);

    //informando os valores dos atributos da opção 1
   
    switch (opcao1){
    case 1:
    printf("\nVocê escolheu a opção: População!\n");
    
    valor1_a = populacao1;
    valor2_a = populacao2;
    break;

    case 2:
    printf("\nVocê escolheu a opção: Área!\n");
   
    valor1_a = area1;
    valor2_a = area2;
    break;

    case 3:
    printf("\nVocê escolheu a opção: PIB!\n");
    
    valor1_a = PIB1;
    valor2_a = PIB2;   
    break;

    case 4:
    printf("\nVocê escolheu a opção: Pontos turísticos!\n");
    
    valor1_a = pontosTuristicos1;
    valor2_a = pontosTuristicos2;
    break;

    case 5:
    printf("\nVocê escolheu a opção: Densidade demográfica!\n");
    
    valor1_a = densidadePopulacional1;
    valor2_a = densidadePopulacional2;
    break;

    default:
    printf("\nOpção inválida!\n");
    break;
   }

    //escolhendo o segundo atributo
    printf("\n-----Escolha a segunda opção (atributo)-----\n");
    printf("Escolha um atributo diferente do primeiro!\n");
    printf("1. Para selecionar a população\n");
    printf("2. Para selecionar a área\n");
    printf("3. Para selecionar o PIB\n");
    printf("4. Para selecionar o número de pontos turísticos\n");
    printf("5. Para selecionar a densidade demográfica\n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) 
        {
        printf("\nVocê escolheu o mesmo atributo!");
        } else {
            //informando os valores dos atributos da opção 2
            switch (opcao2)
            {
            case 1:
            printf("\nVocê escolheu a opção: População!\n");
            
            valor1_b = populacao1;
            valor2_b = populacao2;
            break;

            case 2:
            printf("\nVocê escolheu a opção: Área!\n");
            
            valor1_b = area1;
            valor2_b = area2;
            break;

            case 3:
            printf("\nVocê escolheu a opção: PIB!\n");
            
            valor1_b = PIB1;
            valor2_b = PIB2; 
            break;

            case 4:
            printf("\nVocê escolheu a opção: Pontos turísticos!\n");
            
            valor1_b = pontosTuristicos1;
            valor2_b = pontosTuristicos2;
            break;

            case 5:
            printf("\nVocê escolheu a opção: Densidade demográfica!\n");
            
            valor1_b = densidadePopulacional1;
            valor2_b = densidadePopulacional2;
            break;

            default:
            printf("\nOpção inválida!\n");
            break;
            }
             // Exibir comparação
                printf("\nComparando as cartas %s e %s:\n", cidade1, cidade2);

                float soma1 = 0, soma2 = 0;

                printf("\nAtributo 1:\n");
                printf("%s: %.2f\n", cidade1, valor1_a);
                printf("%s: %.2f\n", cidade2, valor2_a);
                soma1 += (opcao1 == 5) ? 1 / valor1_a : valor1_a;
                soma2 += (opcao1 == 5) ? 1 / valor2_a : valor2_a;

                printf("\nAtributo 2:\n");
                printf("%s: %.2f\n", cidade1, valor1_b);
                printf("%s: %.2f\n", cidade2, valor2_b);
                soma1 += (opcao2 == 5) ? 1 / valor1_b : valor1_b;
                soma2 += (opcao2 == 5) ? 1 / valor2_b : valor2_b;

                // Resultado final
                printf("\nSoma dos atributos:\n");
                printf("%s: %.2f\n", cidade1, soma1);
                printf("%s: %.2f\n", cidade2, soma2);

                if (soma1 > soma2)
                 {
                   printf("\nResultado: %s venceu!\n", cidade1);
                 }
                     else if (soma2 > soma1)
                    {
                          printf("\nResultado: %s venceu!\n", cidade2);
                    }
                     else
                    {
                         printf("\nResultado: Empate!\n");
                     }
        

return 0;
            }
}
