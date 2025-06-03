#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese_Brazil");

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
    float area2 = 11401.0;
    float pib2 = 103.281;
    int pontosTuristicos2 = 20;

    // Cálculos da Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1e9) / populacao1;
    float inversoDensidade1 = 1 / densidade1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;

    // Cálculos da Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1e9) / populacao2;
    float inversoDensidade2 = 1 / densidade2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    // Comparações
    printf("Comparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", 
           populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);

    printf("Área: Carta %d venceu (%d)\n", 
           area1 > area2 ? 1 : 2, area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n", 
           pib1 > pib2 ? 1 : 2, pib1 > pib2);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: Carta %d venceu (%d)\n", 
           superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}
