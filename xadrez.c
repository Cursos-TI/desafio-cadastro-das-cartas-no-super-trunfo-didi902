#include <stdio.h>

int main(){

    char estado01,estado02;
    char codigo01[5],codigo02[5];
    char cidade01[60],cidade02[60];
    int populacao01,populacao02;
    float area_km01,area_km02;
    float PIB01,PIB02;
    int pontos01,pontos02;
    float densidade01,densidade02;
    float PIB_per_capta01,PIB_per_capta02;
    int pci = populacao01,populacao02 , areakm01,areakm02;
    int pci = PIB_per_capta01,PIB_per_capta02 , populacao01,populacao02;


    printf("digite o seu estado: \n");
    scanf("%s", &estado01);
    
    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo01);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade01);

    printf("digite o tamanho da populacao: \n");
    scanf("%d", &populacao01);

    printf("digite a area em km: \n");
    scanf("%f", &area_km01);

    printf("digite o PIB: \n");
    scanf("%f", &PIB01);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos01);

    printf("digite a densidade populacional: \n");
    scanf("%f", &densidade01);

    printf("digite o PIB per capta: \n");
    scanf("%f", &PIB01);

    //printf("digite o numero da populacao e da area: \n");
    pci = (float)(populacao01 / area_km01);

    //printf("digite o PIB per capta e a populacao: \n");
    pci = (float)(PIB01 /populacao01);

 

    printf("digite as informacoes da seunda carta: \n");

    printf("digite o seu estado: \n");
    scanf("%s", &estado02);
    
    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo02);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade02);

    printf("digite o tamanho da populacao: \n");
    scanf("%d", &populacao02);

    printf("digite a area em km: \n");
    scanf("%f", &area_km02);

    printf("digite o PIB: \n");
    scanf("%f", &PIB02);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos02);

    printf("digite a densidade populacional: \n");
    scanf("%f", &densidade02);

    printf("digite o PIB per capta: \n");
    scanf("%f", &PIB02);

    return 0;

    

}