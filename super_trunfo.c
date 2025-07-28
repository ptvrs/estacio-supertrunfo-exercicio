#include <stdio.h> //include biblioteca de entrada e saida de dados
#include <string.h> //biblioteca stl 

int main() //função principal do programa
{
    char estado[50];
    char codigo[10];
    char nome_da_cidade[50];
    int populacao;
    float area;
    float PIB;
    int numero_de_pontos_turisticos;

    printf("Inserir Estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0; // Remove newline

    printf("Inserir Código: ");
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;

    printf("Inserir Nome da Cidade: ");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = 0;

    printf("Inserir População: ");
    scanf("%d", &populacao);

    printf("Inserir Área: ");
    scanf("%f", &area);

    printf("Inserir PIB: ");
    scanf("%f", &PIB);

    printf("Inserir Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);

    // Exibe os dados inseridos
    printf("\n--- Dados Inseridos ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}