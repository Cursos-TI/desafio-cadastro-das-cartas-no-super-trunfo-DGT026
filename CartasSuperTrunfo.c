#include <stdio.h>

int main(){
    printf("Desafio nível novato \n");
    printf("Novo commit\n");
}
#include <stdio.h>

int main() {
    char estado1[10], estado2[10];
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;

    // Entrada de dados - Estado 1
    printf("Digite seu primeiro estado:\n");
    scanf("%s", estado1);

    printf("Codigo:\n");
    scanf("%s", codigo1);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Total de habitantes:\n");
    scanf("%d", &populacao1);

    printf("Area:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados - Estado 2
    printf("\nDigite seu segundo estado:\n");
    scanf("%s", estado2);

    printf("Codigo:\n");
    scanf("%s", codigo2);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Total de habitantes:\n");
    scanf("%d", &populacao2);

    printf("Area:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Saída formatada
    printf("\n========== CARTAS DE ESTADO ==========\n");

    printf("\n[1] Estado: %s\n", estado1);
    printf("Código da Carta: %s%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n[2] Estado: %s\n", estado2);
    printf("Código da Carta: %s%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

