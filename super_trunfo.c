#include <stdio.h> //include biblioteca de entrada e saida de dados
#include <string.h> //biblioteca stl 

int main() //função principal do programa
{
    char estado[50]; // Variável para armazenar o estado
    char codigo[10]; // Variável para armazenar o código
    char nome_da_cidade[50]; // Variável para armazenar o nome da cidade
    int populacao; // Variável para armazenar a população
    float area; // Variável para armazenar a área
    float PIB;  // Variável para armazenar o PIB
    int numero_de_pontos_turisticos;    // Variável para armazenar o número de pontos turísticos

    printf("Inserir Estado: "); // Solicita ao usuário o estado
    fgets(estado, sizeof(estado), stdin); // Lê a entrada do usuário
    estado[strcspn(estado, "\n")] = 0; // Remove newline

    printf("Inserir Código: "); // Solicita ao usuário o código
    fgets(codigo, sizeof(codigo), stdin); // Lê a entrada do usuário
    codigo[strcspn(codigo, "\n")] = 0; // Remove newline

    printf("Inserir Nome da Cidade: "); // Solicita ao usuário o nome da cidade
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);   // Lê a entrada do usuário
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = 0; // Remove newline

    printf("Inserir População: "); // Solicita ao usuário a população
    scanf("%d", &populacao);    // Lê a entrada do usuário

    printf("Inserir Área: ");   // Solicita ao usuário a área
    scanf("%f", &area);  // Lê a entrada do usuário   

    printf("Inserir PIB: "); // Solicita ao usuário o PIB
    scanf("%f", &PIB); // Lê a entrada do usuário
 
    printf("Inserir Número de Pontos Turísticos: "); // Solicita ao usuário o número de pontos turísticos
    scanf("%d", &numero_de_pontos_turisticos); // Lê a entrada do usuário

    // Exibe os dados inseridos
    printf("\n--- Dados Inseridos ---\n");  // Exibe os dados inseridos
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}