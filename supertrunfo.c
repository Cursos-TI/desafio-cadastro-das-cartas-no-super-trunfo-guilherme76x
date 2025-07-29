#include <stdio.h>

int main(){
    char Estado [1];
    char Codigo [3];
    char Cidade [20];
    int Populaçao;
    int PontosTuristicos;
    float Area;
    float PIB;

    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o Codigo Da Carta: \n");
    scanf("%s", &Codigo);

    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite o numero da Populaçao: \n");
    scanf("%d", &Populaçao);

    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);

    printf("Digite a Area em KM²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("nome do Estado: %s", Estado);
    printf("Codigo Da Carta: %s", Codigo);
    printf("nome da Cidade: %s", Cidade);
    printf("numero da Populaçao: %d", Populaçao);
    printf("numero de Pontos Turisticos: %d", PontosTuristicos);
    printf("a Area é: %f", Area");
    printf("o PIB é: %f", PIB);

    return 0;
    
}