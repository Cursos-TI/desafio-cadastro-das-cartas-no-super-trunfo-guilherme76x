#include <stdio.h>

int main() {
    char Estado[20]; 
    char Codigo[4];
    char Cidade[20];
    int Populacao; 
    int PontosTuristicos;
    float Area;
    float PIB;

    printf("Digite o nome do Estado: \n");
    scanf("%19s", Estado);
    printf("Digite o Codigo Da Carta: \n");
    scanf("%3s", Codigo); 
    printf("Digite o Nome Da Cidade: \n");
    scanf("%19s", Cidade);
    printf("Digite o numero da Populacao: \n");
    scanf("%d", &Populacao);
    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);
    printf("Digite a Area em KM²: \n");
    scanf("%f", &Area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Nome do Estado: %s\n", Estado);
    printf("Codigo Da Carta: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Numero da Populacao: %d\n", Populacao);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos);
    printf("A Area é: %.2f KM²\n", Area);
    printf("O PIB é: %.2f\n", PIB); 
    
    return 0;

}