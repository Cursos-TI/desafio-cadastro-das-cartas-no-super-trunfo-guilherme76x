#include <stdio.h>

int main() {
    // Dados para a Carta 1
    char Estado1[20];
    char Codigo1[4];
    char Cidade1[20];
    int Populacao1;
    int PontosTuristicos1;
    float Area1;
    float PIB1;
    float densidadePopulacional1;
    float PIBperCapita1;

    // Dados para a Carta 2
    char Estado2[20];
    char Codigo2[4];
    char Cidade2[20];
    int Populacao2;
    int PontosTuristicos2;
    float Area2;
    float PIB2;
    float densidadePopulacional2;
    float PIBperCapita2;

    // Leitura dos dados para a Carta 1
    printf("Digite o nome do Estado (Carta 1): \n");
    scanf("%19s", Estado1);
    printf("Digite o Codigo Da Carta (Carta 1): \n");
    scanf("%3s", Codigo1);
    printf("Digite o Nome Da Cidade (Carta 1): \n");
    scanf("%19s", Cidade1);
    printf("Digite o numero da Populacao (Carta 1): \n");
    scanf("%d", &Populacao1);
    printf("Digite o numero de Pontos Turisticos (Carta 1): \n");
    scanf("%d", &PontosTuristicos1);
    printf("Digite a Area em KM² (Carta 1): \n");
    scanf("%f", &Area1);
    printf("Digite o PIB (Carta 1): \n");
    scanf("%f", &PIB1);

    // Leitura dos dados para a Carta 2
    printf("Digite o nome do Estado (Carta 2): \n");
    scanf("%19s", Estado2);
    printf("Digite o Codigo Da Carta (Carta 2): \n");
    scanf("%3s", Codigo2);
    printf("Digite o Nome Da Cidade (Carta 2): \n");
    scanf("%19s", Cidade2);
    printf("Digite o numero da Populacao (Carta 2): \n");
    scanf("%d", &Populacao2);
    printf("Digite o numero de Pontos Turisticos (Carta 2): \n");
    scanf("%d", &PontosTuristicos2);
    printf("Digite a Area em KM² (Carta 2): \n");
    scanf("%f", &Area2);
    printf("Digite o PIB (Carta 2): \n");
    scanf("%f", &PIB2);

    // Cálculos para a Carta 1
    densidadePopulacional1 = (float)Populacao1 / Area1;
    PIBperCapita1 = PIB1 / (float)Populacao1;

    // Cálculos para a Carta 2
    densidadePopulacional2 = (float)Populacao2 / Area2;
    PIBperCapita2 = PIB2 / (float)Populacao2;

    int opcao;
do {
        printf("\nMenu de Opções:\n");
        printf("1. Comparar População\n");
        printf("2. Comparar Área\n");
        printf("3. Comparar PIB\n");
        printf("4. Comparar Número de Pontos Turísticos\n");
        printf("5. Comparar Densidade Demográfica\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nComparação de População:\n");
                printf("Carta 1 (%s): %d\n", Cidade1, Populacao1);
                printf("Carta 2 (%s): %d\n", Cidade2, Populacao2);
                if (Populacao1 > Populacao2) {
                    printf("Vencedor: Carta 1 (%s)\n", Cidade1);
                } else if (Populacao1 < Populacao2) {
                    printf("Vencedor: Carta 2 (%s)\n", Cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            case 2:
                printf("\nComparação de Área:\n");
                printf("Carta 1 (%s): %.2f km²\n", Cidade1, Area1);
                printf("Carta 2 (%s): %.2f km²\n", Cidade2, Area2);
                if (Area1 > Area2) {
                    printf("Vencedor: Carta 1 (%s)\n", Cidade1);
                } else if (Area1 < Area2) {
                    printf("Vencedor: Carta 2 (%s)\n", Cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            case 3:
                printf("\nComparação de PIB:\n");
                printf("Carta 1 (%s): %.2f bilhões de reais\n", Cidade1, PIB1);
                printf("Carta 2 (%s): %.2f bilhões de reais\n", Cidade2, PIB2);
                if (PIB1 > PIB2) {
                    printf("Vencedor: Carta 1 (%s)\n", Cidade1);
                } else if (PIB1 < PIB2) {
                    printf("Vencedor: Carta 2 (%s)\n", Cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            case 4:
                printf("\nComparação de Número de Pontos Turísticos:\n");
                printf("Carta 1 (%s): %d\n", Cidade1, PontosTuristicos1);
                printf("Carta 2 (%s): %d\n", Cidade2, PontosTuristicos2);
                if (PontosTuristicos1 > PontosTuristicos2) {
                    printf("Vencedor: Carta 1 (%s)\n", Cidade1);
                } else if (PontosTuristicos1 < PontosTuristicos2) {
                    printf("Vencedor: Carta 2 (%s)\n", Cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            case 5:
                printf("\nComparação de Densidade Demográfica:\n");
                printf("Carta 1 (%s): %.2f hab/km²\n", Cidade1, densidadePopulacional1);
                printf("Carta 2 (%s): %.2f hab/km²\n", Cidade2, densidadePopulacional2);
                if (densidadePopulacional1 > densidadePopulacional2) {
                    printf("Vencedor: Carta 1 (%s)\n", Cidade1);
                } else if (densidadePopulacional1 < densidadePopulacional2) {
                    printf("Vencedor: Carta 2 (%s)\n", Cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 6);

    return 0;
}
