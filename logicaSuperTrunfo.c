#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Super Trunfo!");
    char estado1[3], estado2[3];
    char nome1[50], nome2[50];
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    int criterio;

    printf("\nCadastro da primeira carta:\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);
    printf("\nCadastro da segunda carta:\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Código da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0f / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0f / densidade2);
    resultado_populacao = (populacao1 > populacao2) ? 1 : 0;
    resultado_area = (area1 > area2) ? 1 : 0;
    resultado_pib = (pib1 > pib2) ? 1 : 0;
    resultado_pontos = (pontos1 > pontos2) ? 1 : 0;
    resultado_densidade = (densidade1 < densidade2) ? 1 : 0; // menor é melhor
    resultado_pib_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    resultado_super_poder = (super_poder1 > super_poder2) ? 1 : 0;

    printf("\n--- Resultado da Comparação ---\n");
    printf("População: %d\n", resultado_populacao);
    printf("Área: %d\n", resultado_area);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos turísticos: %d\n", resultado_pontos);
    printf("Densidade Populacional: %d\n", resultado_densidade);
    printf("PIB per Capita: %d\n", resultado_pib_capita);
    printf("Super Poder: %d\n", resultado_super_poder);


    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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

    return 0;
}
