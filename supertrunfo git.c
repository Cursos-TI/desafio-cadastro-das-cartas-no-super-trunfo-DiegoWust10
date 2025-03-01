#include <stdio.h>

int main() {
    char cidade1, cidade2,  estado1, estado2;
    int populacao1, populacao2,  pontos1, pontos2;
    float area1, area2, pib1, pib2;
    char codcarta1[100], codcarta2[100];

    printf("digite o estado1 \n");
    scanf("%s" , &estado1);

    printf("digite o estado2 \n");
    scanf("%s" , &estado2);

    printf("digite o codcarta1: \n");
    scanf("%s", &codcarta1);

    printf("digite o codcarta2: \n");
    scanf("%s", &codcarta2);

    printf("digite sua cidade1: \n");
    scanf("%s", &cidade1);
    
    printf("digite sua cidade2: \n");
    scanf("%s", &cidade2);

    printf(" digite a populacao1: \n");
    scanf("%d", &populacao1);

    printf("digite a populacao2: \n");
    scanf("%d", &populacao2);

    printf(" digite a area1 (em km²): \n");
    scanf("%f", &area1);

    printf("digite a area2 (em km²): \n");
    scanf("%f", &area2);

    printf("digite o pib1: \n");
    scanf("%f", &pib1);

    printf("digite o pib2: \n");
    scanf("%f", &pib2);

    printf(" digite os pontos1: \n");
    scanf("%d", &pontos1);

    printf("digite os pontos2: \n");
    scanf("%d", &pontos2);




    return 0;
}