#include <stdio.h>

int main(){

    char estado01, estado02;
    char codigo01[4], codigo02[4];
    char cidade01[20], cidade02[20];
    unsigned long int populacao01, populacao02;
    float areakm01, areakm02;
    float PIB01, PIB02;
    int pontos01, pontos02;
    float densidade01, densidade02;
    float PIB_per_capta01, PIB_per_capta02;
    
    printf("\carta01\n");

    printf("digite uma letra de A-Z: ");
    scanf("%c", &estado01);
    
    printf("digite o codigo da carta exemplo(a1 b2): ");
    scanf("%s", &codigo01);

    printf("digite o nome da cidade: ");
    scanf("%s", &cidade01);

    printf("digite o tamanho da populacao: ");
    scanf("%lu", &populacao01);

    printf("digite a area em km: ");
    scanf("%f", &areakm01);

    printf("digite o PIB: ");
    scanf("%f", &PIB01);

    printf("digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos01);

    //calculo da densidade pelo pib
    densidade01 = populacao01 / areakm01;
    PIB01 = PIB01*1000000000 / (float)populacao01;


    
    printf("\carta02\n");

    printf("digite uma letra de A-Z: ");
    scanf("%c", &estado02);
    
    printf("digite o codigo da carta exemplo(a1 b2): ");
    scanf("%s", &codigo02);

    printf("digite o nome da cidade: ");
    scanf("%s", &cidade02);

    printf("digite o tamanho da populacao: ");
    scanf("%lu", &populacao02);

    printf("digite a area em km: ");
    scanf("%f", &areakm02);

    printf("digite o PIB: ");
    scanf("%f", &PIB02);

    printf("digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos02);
    
    //calculo da densidade pelo pib
    densidade02 = populacao02 / areakm02;
    PIB02 = PIB02*1000000000 / (float)populacao02;
    


    printf("\ncomparacao de cartas:\n");

    printf("estado: %c\n, estado01");

    printf("codigo: %s\n, codigo01");

    printf("nome da cidade: %s\n, cidade01");

    printf("populacao: %lu\n, populacao01");

    printf("area: %.2f\n, areakm01");

    printf("PIB: %.2f\n, PIB01");

    printf("numero de pontos turisticos: %d\n, pontosturisticos01");

    printf("densidade populacional: %.2f\n, densidade01");

    printf("PIB per capta:%.2f\n", PIB01);


           
    printf("\ncomparacao de cartas:\n");

    printf("estado: %c\n, estado02");

    printf("codigo: %s\n, codigo02");

    printf("nome da cidade: %s\n, cidade02");

    printf("populacao: %lu\n, populacao02");

    printf("area: %.2f\n, areakm02");

    printf("PIB: %.2f\n, PIB02");

    printf("numero de pontos turisticos: %d\n, pontos02");

    printf("densidade populacional: %.2f\n, densidade02");

    printf("PIB per capta:%.2f\n", PIB02);



    






    return 0;

}