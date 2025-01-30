#include <stdio.h>



int main() {
   
char codigo;

    char cidade[30];

    int pop,pib,turistico;

    float area;

    printf("Entre com o codigo da cidade: \n");
    scanf(" %c",&codigo);

    printf("Entre com o nome da cidade: \n");
    scanf(" %s",&cidade);

    printf("Entre com a populacao: \n");
    scanf(" %d",&pop);

    printf("Entre com a area: \n");
    scanf (" %f",&area);

    printf("Entre com o PIB: \n");
    scanf(" %d",&pib);

    printf("Entre com o numero de pontos turisticos: \n");
    scanf(" %d",&turistico);

    printf (" O Codigo e: %c \n",codigo);

    printf(" O nome da cidade e: %s  \n",cidade);

    printf(" A populacao da cidade e: %d  mil habitantes \n",pop);

    printf(" A area da cidade e: %.2f   metros quadrados \n",area);

    printf(" O PIB e : %d  milhoes \n",pib);

    printf(" O numero de pontos turisticos sao: %d \n",turistico);

    return 0;
}
