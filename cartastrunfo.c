cartastrunfo.c

#include <stdio.h>
int main (){



// CARTA 1= Betim (Mg)
char cidade1[]= "betim";
char estado1[]="mg";
unsigned long populacao1 = 439340;
float area1 = 1624.11;
int pontos1 = 10;

// CARTA 2 = Paraty (RJ)
char cidade2[]= "paraty";
char estado2[]= "rj";
unsigned long populacao2 = 42190;
float area2 = 1624.11;
int pontos2 = 15;

printf("\n--- CARTA 1 ---\n");
printf("Cidade: %s (%s)\n", cidade1, estado1);
printf("Populacao: %lu\n", populacao1);
printf("Area: %.2f km2\n", area1);
printf("Pontos Turisticos: %d\n", pontos1);


printf("\n--- CARTA 2 ---\n");
printf("Cidade: %s (%s)\n", cidade2, estado2);
printf("Populacao: %lu\n", populacao2);
printf("Area: %.2f km2\n", area2);
printf("Pontos Turisticos: %d\n", pontos2);
}
