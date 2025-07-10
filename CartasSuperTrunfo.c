#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro e Exibição de Duas Cartas
int main() {
    // --- Variáveis para a Primeira Carta ---
    int populacao1, numeroDePontosTuristicos1;
    float area1, pib1;
    char estado1;
    char codigoDaCarta1[4]; // 3 caracteres + '\0'
    char nomeDaCidade1[20];

    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (apenas um caractere, ex: 'A'): ");
    scanf(" %c", &estado1); // Espaço antes de %c para ignorar o \n anterior
    getchar(); // Consome o \n deixado pelo Enter após o caractere

    printf("Código (3 caracteres, ex: 'BR0'): ");
    scanf("%3s", codigoDaCarta1);
    getchar(); // Consome o \n deixado pelo Enter após a string

    printf("Nome da Cidade: ");
    scanf("%s", nomeDaCidade1);
    getchar(); // Consome o \n deixado pelo Enter após a string

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeroDePontosTuristicos1);

    // --- Variáveis para a Segunda Carta ---
    int populacao2, numeroDePontosTuristicos2;
    float area2, pib2;
    char estado2;
    char codigoDaCarta2[4]; // 3 caracteres + '\0'
    char nomeDaCidade2[20];

    printf("\n--- Cadastro da Carta 2 ---\n");

    // É importante ter um getchar() antes do scanf de caractere da segunda carta
    // para consumir o \n que pode ter sido deixado pelo último scanf da carta 1.
    getchar(); // Consome o \n residual do último scanf numérico da Carta 1

    printf("Estado (apenas um caractere, ex: 'B'): ");
    scanf(" %c", &estado2); // Espaço antes de %c para ignorar o \n anterior
    getchar(); // Consome o \n deixado pelo Enter após o caractere

    printf("Código (3 caracteres, ex: 'AR1'): ");
    scanf("%3s", codigoDaCarta2);
    getchar(); // Consome o \n deixado pelo Enter após a string

    printf("Nome da Cidade: ");
    scanf("%s", nomeDaCidade2);
    getchar(); // Consome o \n deixado pelo Enter após a string

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeroDePontosTuristicos2);

    // --- Exibição das Cartas ---
    printf("\n\n=== Cartas Cadastradas ===\n");

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", numeroDePontosTuristicos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", numeroDePontosTuristicos2);

    return 0;
}
