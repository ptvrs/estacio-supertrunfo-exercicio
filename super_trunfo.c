#include <stdio.h>
#include <string.h>

int main()
{
    // Card 1
    char estado1[50];
    char codigo1[10];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;

    // Card 2
    char estado2[50];
    char codigo2[10];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;

    // Input for Card 1
    printf("Inserir Estado (Card 1): ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Inserir Código (Card 1): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Inserir Nome da Cidade (Card 1): ");
    fgets(nome_da_cidade1, sizeof(nome_da_cidade1), stdin);
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0;

    printf("Inserir População (Card 1): ");
    scanf("%d", &populacao1);

    printf("Inserir Área (Card 1): ");
    scanf("%f", &area1);

    printf("Inserir PIB (Card 1): ");
    scanf("%f", &PIB1);

    printf("Inserir Número de Pontos Turísticos (Card 1): ");
    scanf("%d", &numero_de_pontos_turisticos1);

    while(getchar() != '\n'); // Limpa o buffer do teclado

    // Input for Card 2
    printf("Inserir Estado (Card 2): ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Inserir Código (Card 2): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Inserir Nome da Cidade (Card 2): ");
    fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0;

    printf("Inserir População (Card 2): ");
    scanf("%d", &populacao2);

    printf("Inserir Área (Card 2): ");
    scanf("%f", &area2);

    printf("Inserir PIB (Card 2): ");
    scanf("%f", &PIB2);

    printf("Inserir Número de Pontos Turísticos (Card 2): ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Exibe os dados dos dois cards
    printf("\n--- Card 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);

    printf("\n--- Card 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);  

    return 0;
}