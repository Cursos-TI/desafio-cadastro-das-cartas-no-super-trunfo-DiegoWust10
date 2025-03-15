#include <stdio.h>

int main() {
    char cidade1,  estado1;
    int populacao1, pontos1;
    float area1, pib1;
    char codcarta1[100];

    printf("digite o estado1 \n");
    scanf("%s" , &estado1);

    printf("digite o codcarta1: \n");
    scanf("%s", &codcarta1);

    printf("digite sua cidade1: \n");
    scanf("%s", &cidade1);
    
    printf(" digite a populacao1: \n");
    scanf("%d", &populacao1);

    printf(" digite a area1 (em km²): \n");
    scanf("%f", &area1);

    printf("digite o pib1: \n");
    scanf("%f", &pib1);

    printf(" digite os pontos1: \n");
    scanf("%d", &pontos1);


    // Exibindo dados da carta 1:

    printf("estado1: %s\n" , estado1);
    printf("codcarta1: %s \n", codcarta1);
    printf("cidade1: %s \n", cidade1);
    printf("populacao1: %d \n" , populacao1);
    printf("area1: %f \n" , area1);
    printf("pib1: %f \n", pib1);
    printf("pontos1: %d \n" , pontos1);

   
    return 0;
}
