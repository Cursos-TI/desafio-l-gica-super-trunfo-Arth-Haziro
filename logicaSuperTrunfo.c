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

    int opcao;
    do {
        printf("\n--- Menu de Comparação ---\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        float densidade1 = populacao1 / area1;
        float densidade2 = populacao2 / area2;
        float pib_per_capita1 = pib1 / populacao1;
        float pib_per_capita2 = pib2 / populacao2;
        float super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0f / densidade1);
        float super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0f / densidade2);

    printf("\nEscolha o critério para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    scanf("%d", &criterio);

    printf("\n--- Carta 1 - %s ---\n", codigo1);
    printf("Estado: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
        estado1, nome1, populacao1, area1, pib1, pontos1);

    printf("\n--- Carta 2 - %s ---\n", codigo2);
    printf("Estado: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
        estado2, nome2, populacao2, area2, pib2, pontos2);
    
        printf("\n--- Resultado da Comparação ---\n");
    if (criterio == 1) {
        if (populacao1 > populacao2)
            printf("Vencedora: Carta 1 (%s)\n", nome1);
        else if (populacao2 > populacao1)
            printf("Vencedora: Carta 2 (%s)\n", nome2);
        else
            printf("Empate!\n");
    } else if (criterio == 2) {
        if (area1 > area2)
            printf("Vencedora: Carta 1 (%s)\n", nome1);
        else if (area2 > area1)
            printf("Vencedora: Carta 2 (%s)\n", nome2);
        else
            printf("Empate!\n");
    } else if (criterio == 3) {
        if (pib1 > pib2)
            printf("Vencedora: Carta 1 (%s)\n", nome1);
        else if (pib2 > pib1)
            printf("Vencedora: Carta 2 (%s)\n", nome2);
        else
            printf("Empate!\n");
    } else if (criterio == 4) {
        if (pontos1 > pontos2)
            printf("Vencedora: Carta 1 (%s)\n", nome1);
        else if (pontos2 > pontos1)
            printf("Vencedora: Carta 2 (%s)\n", nome2);
        else
            printf("Empate!\n");
    } else {
        printf("Critério inválido!\n");
    }

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
