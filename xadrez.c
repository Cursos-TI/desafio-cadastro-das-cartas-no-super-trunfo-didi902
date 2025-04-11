#include <stdio.h>

int main(){

    char estado01,estado02;
    char codigo01[5],codigo02[5];
    char cidade01[60],cidade02[60];
    int populacao01,populacao02;
    float areakm01,areakm02;
    float PIB01,PIB02;
    int pontos01,pontos02;
    float densidade01,densidade02;
    float PIB_per_capta01,PIB_per_capta02;
    float somapoder1 , somapoder2;


    printf("digite o seu estado: \n");
    scanf("%c", &estado01);
    
    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo01);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade01);

    printf("digite o tamanho da populacao: \n");
    scanf("%lu", &populacao01);

    printf("digite a area em km: \n");
    scanf("%f", &areakm01);

    printf("digite o PIB: \n");
    scanf("%f", &PIB01);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos01);

    printf("digite a densidade populacional: \n");
    scanf("%f", &densidade01);

    printf("digite o PIB per capta: \n");
    scanf("%f", &PIB01);


    
    printf("digite as informacoes da seunda carta: \n");

    printf("digite o seu estado: \n");
    scanf("%s", &estado02);
    
    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo02);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade02);

    printf("digite o tamanho da populacao: \n");
    scanf("%lu", &populacao02);

    printf("digite a area em km: \n");
    scanf("%f", &areakm02);

    printf("digite o PIB: \n");
    scanf("%f", &PIB02);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos02);

    printf("digite a densidade populacional: \n");
    scanf("%f", &densidade02);

    printf("digite o PIB per capta: \n");
    scanf("%f", densidade02);

    // Cálculos
    populacao01 = populacao01 / areakm01;
    PIB01 = (PIB01 * 1000000000) / (float)populacao01;
    
    populacao02 = populacao02 / areakm02;
    PIB02 = (PIB02 * 1000000000) / (float)populacao02;
    
    somapoder1 = ((float)populacao01 + areakm01 + PIB01 + pontos01 + PIB01) + (1 / populacao01);
    somapoder2 = ((float)populacao02 + areakm02 + PIB02 + pontos02 + PIB02) + (1 / populacao02);