#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL,"portuguese_Brazil");

 // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Belo Horizonte";
    int populacao1 = 23160000;
    float area1 = 331.4;
    float pib1 = 105.829;
    int pontosTuristicos1 = 20;

    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Manaus";
    int populacao2 = 2064000;
    float area2 = 11.401;
    float pib2 = 103.281;
    int pontosTuristicos2 = 20;

    // Imprimir Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Imprimir Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; 
}
