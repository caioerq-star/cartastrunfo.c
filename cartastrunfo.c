#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main (){
int opcao;    


// CARTA 3 = Salvador (BA)

char cidade3[] = "Salvador";
char estado3[] = "Bahia";
int população3 = 2900000;
float area3 = 693.80;
float pib3 = 63.50;
int pontosturistico3 = 35;
float Densidade3 = 4180.00;
float pibcapital3 = 21900.00;

// CARTA 4 = FORTALEZA (CE)

char cidade4[] = "Fortaleza";
char estado4[] = "Ceara";
int população4 = 2687000;
float area4 = 312.40;
float pib4 = 67.00;
int pontosturisticos4 = 30;
float densidade4 = 8600.00;
float pibcapital4 = 24900.00;


printf(" \n CARTA 3 \n");
printf("Cidade: %s \n", cidade3);
printf("Estado: %s \n" , estado3) ;
printf("População: %d \n" , população3);
printf("Pontos Turisticos: %d \n " , pontosturistico3);
printf("Area: %f \n", area3);
printf("Pib: %f \n " , pib3);
printf("Densidade: %.2f \n ", Densidade3 );
printf("Pib Capital: %.2f \n" , pibcapital3);


printf ("\n CARTA 4 \n"); 
printf ("Cidade: %s \n" , cidade4);
printf ("Estado: %s \n" , estado4);
printf ("População: %d \n" , população4);
printf ("Pontos turisticos: %d \n" , pontosturisticos4);
printf ("Area: %f \n" , area4);
printf ("Pib: %f \n" , pib4);
printf ("Densidade: %.2f \n" , densidade4);
printf ("Pib Capital: %.2f \n" , pibcapital4);


Densidade3 = população3 / area3;
printf ("Densidade Populacional Carta3: %.2f hab/km² \n", Densidade3);

densidade4 = população4 / area4 ;
printf("Densidade Populacional Carta4: %.2f hab/km² \n", densidade4);

pibcapital3 = (pib3 *1000000000 ) / população3;
printf ("Pib per Capital Carta 3: %.2f reais \n" , pibcapital3);

pibcapital4 = (pib4 *1000000000 ) /população4;
printf("Pib per Capital Carta 4: %.2f reais \n", pibcapital4);


if(população3 > população4 ) {
    printf("População da carta 3 é a vencedora\n");

} else {
    printf("População da carta 4 é a vencedora\n");
}

if(pib3 > pib4) {
    printf("Pib da carta 3 é a vencedora\n");

} else {
    printf ("Pib da carta 4 é a vencedora\n");   
}

printf("Escolha uma opção para comparação entre Fortaleza e Salvador: \n"); 
printf("1. População \n");
printf("2. Area\n");
printf("3. Pib\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

printf("Carta 3: %s (%s)\n", cidade3, estado3);
printf("Carta 4: %s (%s)\n", cidade4, estado4);

switch (opcao)
{
case 1: //POPULAÇÃO
printf("Atributo comparado: População\n");
printf("%s: %d habitantes\n", cidade3, população3);
printf("%s: %d habitantes\n", cidade4, população4);
 
if (população3 > população4) {
    printf("Vencedora: %s\n", cidade3);
} else if (população4 > população3){
    printf("Vencedora: %s\n, cidade4");
} else {
    printf("Empate!\n");
}
    break;
case 2: //Area
printf("Atributo comparado: Area\n");
printf("%s : %.2f km\n", cidade3, area3);
printf("%s : %.2f km\n", cidade4, area4); 

if (area3 > area4) {
printf("Vencedora: %s\n", cidade3,area3);
} else if  (area4 > area3) {
printf("Vecedora: %s\n", cidade4);
} else {
    printf("Empate!\n");

}
    break;

case 3: //Pib
printf("Atributo comparado: Pib\n");
printf("%s: %.2f bilhões\n", cidade3, pib3);
printf("%s: %.2f bilhões\n", cidade4, pib4);

if (pib3 > pib4) {
printf("Vencedora: %s\n", cidade3);
} else if (pib4 > pib3 ) {
printf("Vencedora: %s\n", cidade4);
} else {
printf("Empate!\n");
}
    break;

default: 
printf("Opção Invalida");

}
}
printf("\n--- CARTA 2 ---\n");
printf("Cidade: %s (%s)\n", cidade2, estado2);
printf("Populacao: %lu\n", populacao2);
printf("Area: %.2f km2\n", area2);
printf("Pontos Turisticos: %d\n", pontos2);
}
