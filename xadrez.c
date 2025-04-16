#include <stdio.h>

int main(){

    char estado01,estado02;
    char codigo01[4],codigo02[4];
    char cidade01[20],cidade02[20];
    int populacao01,populacao02;
    float areakm01,areakm02;
    float PIB01,PIB02;
    int pontos01,pontos02;
    float densidade01,densidade02;
    float PIB_per_capta01,PIB_per_capta02;
    


    printf("digite o seu estado: \n");
    scanf("%s", &estado01);
    
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


  
    // Cálculos
    populacao01 = populacao01 / areakm01;
    PIB01 = (PIB01 * 1000000000) / (float)populacao01;
    
    populacao02 = populacao02 / areakm02;
    PIB02 = (PIB02 * 1000000000) / (float)populacao02;
    

    printf("\ncomparacao de cartas:\n");

    printf("estado: %s\n");
    printf("codigo: %s\n");
    printf("nome da cidade: %s\n");
    printf("populacao: %lu\n");
    printf("area: %f\n");
    printf("PIB: %f\n");
    printf("numero de pontos turisticos: %d\n");
    printf("densidade populacional: %d\n");
          (densidade01 / areakm01) * 1 + (densidade01 / areakm01); //* 2,
           //densidade01 / areakm01);
    printf("PIB: PIB %d\n");
           (PIB01 / densidade01) * 1 + (PIB01 / densidade01); //* 2,
           //PIB01 / densidade01);

           
    printf("\ncomparacao de cartas:\n");

    printf("estado: %d\n");
    printf("codigo: %d\n");
    printf("nome da cidade: %d\n");
    printf("populacao: %d\n");
    printf("area: %d\n");
    printf("PIB: %d\n");
    printf("numero de pontos turisticos: %d\n");
    printf("densidade populacional: %d\n");
          (densidade02 / areakm02) * 1 + (densidade02 / areakm02); //* 2,
           //densidade02 / areakm02);
    printf("PIB: PIB %d\n");
           (PIB01 / densidade02) * 1 + (PIB02 / densidade02); //* 2,
           //PIB02 / densidade02);






    return 0;

}