#include <stdio.h>

typedef struct {
    char Estado[20];
    char Codigo[4];
    char Cidade[20];
    int Populacao;
    int PontosTuristicos;
    float Area;
    float PIB;
} Carta;

int main() {
    Carta carta1, carta2;

    // Leitura dos dados das cartas
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%19s", carta1.Estado);
    printf("Código: ");
    scanf("%3s", carta1.Codigo);
    printf("Cidade: ");
    scanf("%19s", carta1.Cidade);
    printf("População: ");
    scanf("%d", &carta1.Populacao);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.PontosTuristicos);
    printf("Área (km²): ");
    scanf("%f", &carta1.Area);
    printf("PIB: ");
    scanf("%f", &carta1.PIB);

    printf("Digite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%19s", carta2.Estado);
    printf("Código: ");
    scanf("%3s", carta2.Codigo);
    printf("Cidade: ");
    scanf("%19s", carta2.Cidade);
    printf("População: ");
    scanf("%d", &carta2.Populacao);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.PontosTuristicos);
    printf("Área (km²): ");
    scanf("%f", &carta2.Area);
    printf("PIB: ");
    scanf("%f", &carta2.PIB);
  // Escolha dos atributos
    int atributo1, atributo2, atributo3;
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo:\n");
    switch (atributo1) {
        case 1:
            printf("1. Área\n");
            printf("2. PIB\n");
            printf("3. Pontos Turísticos\n");
            scanf("%d", &atributo2);
            atributo2 += 1;
            break;
        case 2:
            printf("1. População\n");
            printf("2. PIB\n");
            printf("3. Pontos Turísticos\n");
            scanf("%d", &atributo2);
            if (atributo2 == 1) atributo2 = 1;
            else atributo2 += 1;
            break;
        case 3:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. Pontos Turísticos\n");
            scanf("%d", &atributo2);
            if (atributo2 <= 2) atributo2 = atributo2;
            else atributo2 = 4;
            break;
        case 4:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            scanf("%d", &atributo2);
            atributo2 = atributo2;
            break;
    }

    printf("Escolha o terceiro atributo:\n");
    switch (atributo1) {
        case 1:
            switch (atributo2) {
                case 2:
                    printf("1. PIB não é opção, escolha Pontos Turísticos\n");
                    printf("1. Pontos Turísticos\n");
                    scanf("%d", &atributo3);
                    atributo3 = 4;
                    break;
                case 3:
                    printf("1. Área\n");
                    printf("2. PIB\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 2;
                    else atributo3 = 3;
                    break;
                case 4:
                    printf("1. Área\n");
                    printf("2. PIB\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 2;
                    else atributo3 = 3;
                    break;
            }
            break;
case 2:
            switch (atributo2) {
                case 1:
                    printf("1. PIB\n");
                    printf("2. Pontos Turísticos\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 3;
                    else atributo3 = 4;
                    break;
                case 3:
                    printf("1. População\n");
                    printf("2. Pontos Turísticos\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 1;
                    else atributo3 = 4;
                    break;
                case 4:
                    printf("1. População\n");
                    printf("2. PIB\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 1;
                    else atributo3 = 3;
                    break;
            }
            break;
        case 3:
            switch (atributo2) {
                case 1:
                    printf("1. Área\n");
                    printf("2. Pontos Turísticos\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 2;
                    else atributo3 = 4;
                    break;
                case 2:
                    printf("1. População\n");
                    printf("2. Pontos Turísticos\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 1;
                    else atributo3 = 4;
                    break;
                case 4:
                    printf("1. População\n");
                    printf("2. Área\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 1;
                    else atributo3 = 2;
                    break;
            }
            break;
        case 4:
            switch (atributo2) {
                case 1:
                    printf("1. Área\n");
                    printf("2. PIB\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 2;
                    else atributo3 = 3;
                    break;
                case 2:
                    printf("1. População\n");
                    printf("2. PIB\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 1;
                    else atributo3 = 3;
                    break;
                case 3:
                    printf("1. População\n");
                    printf("2. Área\n");
                    scanf("%d", &atributo3);
                    if (atributo3 == 1) atributo3 = 1;
                    else atributo3 = 2;
                    break;
            }
            break;
    }

 // Comparação dos atributos
    float somaCarta1 = 0, somaCarta2 = 0;

    switch (atributo1) {
        case 1:
            somaCarta1 += carta1.Populacao;
            somaCarta2 += carta2.Populacao;
            break;
        case 2:
            somaCarta1 += carta1.Area;
            somaCarta2 += carta2.Area;
            break;
        case 3:
            somaCarta1 += carta1.PIB;
            somaCarta2 += carta2.PIB;
            break;
        case 4:
            somaCarta1 += carta1.PontosTuristicos;
            somaCarta2 += carta2.PontosTuristicos;
            break;
    }

    switch (atributo2) {
        case 1:
            somaCarta1 += carta1.Populacao;
            somaCarta2 += carta2.Populacao;
            break;
        case 2:
            somaCarta1 += carta1.Area;
            somaCarta2 += carta2.Area;
            break;
        case 3:
            somaCarta1 += carta1.PIB;
            somaCarta2 += carta2.PIB;
            break;
        case 4:
            somaCarta1 += carta1.PontosTuristicos;
            somaCarta2 += carta2.PontosTuristicos;
            break;
    }

    switch (atributo3) {
        case 1:
            somaCarta1 += carta1.Populacao;
            somaCarta2 += carta2.Populacao;
            break;
        case 2:
            somaCarta1 += carta1.Area;
            somaCarta2 += carta2.Area;
            break;
        case 3:
            somaCarta1 += carta1.PIB;
            somaCarta2 += carta2.PIB;
            break;
        case 4:
            somaCarta1 += carta1.PontosTuristicos;
            somaCarta2 += carta2.PontosTuristicos;
            break;
    }

    // Determinação do vencedor
    printf("Carta 1 (%s) tem %.2f pontos\n", carta1.Cidade, somaCarta1);
    printf("Carta 2 (%s) tem %.2f pontos\n", carta2.Cidade, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("Vencedor: Carta 1 (%s)\n", carta1.Cidade);
    } else if (somaCarta1 < somaCarta2) {
        printf("Vencedor: Carta 2 (%s)\n", carta2.Cidade);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
