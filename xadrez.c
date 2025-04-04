#include <stdio.h>

int main(){

    char estado;
    char codigo[50];
    char cidade[50];
    int populacao;
    float area_km;
    float PIB;
    int pontos;
    float densidade_populacional;
    float PIB_per_capta;
    int divisao = populacao / area_km;
    int divisao = PIB_per_capta / populacao;


    printf("digite o seu estado: \n");
    scanf("%s", &estado);
    
    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("digite o tamanho da populacao: \n");
    scanf("%d", &populacao);

    printf("digite a area em km: \n");
    scanf("%f", &area_km);

    printf("digite o PIB: \n");
    scanf("%f", &PIB);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("digite a densidade populacional: \n");
    scanf("%f", &densidade_populacional);

    printf("digite o PIB per capta: \n");
    scanf("%f", &PIB);

    printf("digite o numero da populacao e da area: \n");
    scanf("divisao: %d\n", divisao);

    printf("digite o PIB per capta e a populacao: \n");
    scanf("divisao: %d\n", divisao);


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
    scanf("%f", &area_km);

    printf("digite o PIB: \n");
    scanf("%f", &PIB);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("digite a densidade populacional: \n");
    scanf("%f", &densidade_populacional);

    printf("digite o PIB per capta: \n");
    scanf("%f", &PIB);

    return 0;

    

}