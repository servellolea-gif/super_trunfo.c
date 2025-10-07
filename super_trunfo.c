#include <stdio.h>

int main (){
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao, pontosturisticos;
    double area, pib, densidadepopulacional, pibpercapita;

    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2, pontosturisticos2;
    double area2, pib2, densidadepopulacional2, pibpercapita2;

    /*Importante colocar o número no nome das variáveis para que o código reconheça a diferença de uma carta para a outra na hora de imprimir no terminal*/

    printf("Vamos começar pela carta 1:\n");

    printf("Digite o nome do estado:\n");
    scanf("%s",estado);

    printf("Digite o código da carta (será a sigla do estado mais um número de 01 à 04):\n");
    scanf("%s",codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s",cidade);

    printf("Qual o número de habitantes desta cidade?\n");
    scanf("%d",&populacao);

    printf("Qual a área da cidade em km²?\n");
    scanf("%lf",&area);

    printf("Qual o PIB em bilhões de reais?\n");
    scanf("%lf",&pib);

    printf("Está cidade possui quantos pontos turisticos?\n");
    scanf("%d",&pontosturisticos);

    densidadepopulacional = (double)populacao / area;
    pibpercapita = pib * 1000000000.0 / (double)populacao; // Convertendo PIB de bilhões para reais

    printf("Carta 1:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da cidade:%s\n", cidade);
    printf("População:%d\n", populacao);
    printf("Área:%.2f km²\n", area);
    printf("PIB:%.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turisticos:%d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pibpercapita);  


    printf("Vamos para a carta 2:\n");

    printf("Digite o nome do estado:\n");
    scanf("%s",estado2);

    printf("Digite o código da carta (será a sigla do estado mais um número de 01 à 04):\n");
    scanf("%s",codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s",cidade2);

    printf("Qual o número de habitantes desta cidade?\n");
    scanf("%d",&populacao2);

    printf("Qual a área da cidade em km²?\n");
    scanf("%lf",&area2);

    printf("Qual o PIB em bilhões de reais?\n");
    scanf("%lf",&pib2);

    printf("Está cidade possui quantos pontos turisticos?\n");
    scanf("%d",&pontosturisticos2);

    densidadepopulacional2 = (double)populacao2 / area2;
    pibpercapita2 = pib2 * 1000000000.0 / (double)populacao2; // Convertendo PIB de bilhões para reais

    printf("Carta 2:\n");
    printf("Estado:%s\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%.2f km²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos:%d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);

    /*O código se repete nas duas cartas, por isso, é importante lembrar que existem diferenças na nomenclatura para que as informações sejam impressas corretamente no terminal*/

return 0;

}