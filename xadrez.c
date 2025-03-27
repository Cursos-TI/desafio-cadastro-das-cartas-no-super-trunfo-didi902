#include <stdio.h>

int main(){

    char estado;
    char codigo[30];
    char cidade[30];
    int populacao;
    float area, km;
    float PIB;
    int pontos;
    float densidade, populacional;
    float PIBpercapta;
    int quociente = populacao / area;
    int quociente = PIBpercapta / populacao;

    printf("digite o seu estado: \n");
    scanf("%s", &estado);
    
    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("digite o tamanho da populacao: \n");
    scanf("%d", &populacao);

    printf("digite a area em km: \n");
    scanf("%f", &area);

    printf("digite o PIB: \n");
    scanf("%f", &PIB);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("digite a densidade populacional: \n");
    scanf("%f", &densidade);

    printf("digite o PIB per capta: \n");
    scanf("%f", &PIB);

    printf("digite as informacoes da seunda carta: \n");

    printf("digite o seu estado: \n");
    scanf("%s", &estado);
    
    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("digite o tamanho da populacao: \n");
    scanf("%d", &populacao);

    printf("digite a area em km: \n");
    scanf("%f", &area);

    printf("digite o PIB: \n");
    scanf("%f", &PIB);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("digite a densidade populacional: \n");
    scanf("%f", &densidade);

    printf("digite o PIB per capta: \n");
    scanf("%f", &PIB);

    return 0;

    

}