#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Desafio Super Trunfo\n");
    printf("Novo commit\n");
    
    char Estado;
    char Codigo[4];
    char NomeDaCidade[30];
    int Populacao;
    float Area;
    float PIB;
    int NumeroDePontosTuristicos;
    char AreaTexto[20];
    char PIBTexto[30];

    printf("Estado: ");
    scanf(" %c", &Estado);  

    printf("Código da cidade: ");
    scanf("%s", Codigo);

    getchar();

    printf("Nome da Cidade: ");
    fgets(NomeDaCidade, sizeof(NomeDaCidade), stdin);

    printf("População: ");
    scanf("%d", &Populacao);

    getchar();

    printf("Área em Km²: ");
    fgets(AreaTexto, sizeof(AreaTexto), stdin);
    sscanf(AreaTexto, "%f", &Area);

    printf("PIB: ");
    fgets(PIBTexto, sizeof(PIBTexto), stdin);
    sscanf(PIBTexto, "%f", &PIB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &NumeroDePontosTuristicos);

   
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s", NomeDaCidade);
    printf("População: %d\n", Populacao);
    printf("Área em km²: %.2f\n", Area);
    printf("PIB: %.2f Bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos);

    return 0;
}