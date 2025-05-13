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
    float somapoder01, somapoder02;
    float superpoder01, superpoder02;
    int ataque01, ataque02;
    int opcao01, opcao02;
    int resultado01, resultado02;
    
    printf("\carta01\n");

    printf("digite uma letra de A-Z: ");
    scanf("%c", &estado01);
    
    printf("digite o codigo da carta exemplo(a01 b02): ");
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

    somapoder01 = ((float)populacao01 + areakm01 + PIB01 + pontos01 + PIB_per_capta01) + (1 / densidade01);


    
    printf("\carta02\n");

    printf("digite uma letra de A-Z: ");
    scanf(" %c", &estado02);
    
    printf("digite o codigo da carta exemplo(a01 b02): ");
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

    somapoder02 = ((float)populacao02 + areakm02 + PIB02 + pontos02 + PIB_per_capta02) + (1 / densidade02);
    


    printf("\ncomparacao de cartas:\n");

    printf("estado: %c\n", estado01);

    printf("codigo: %s\n", codigo01);

    printf("nome da cidade: %s\n", cidade01);

    printf("populacao: %lu\n", populacao01);

    printf("area: %.2f\n", areakm01);

    printf("PIB: %.2f\n", PIB01);

    printf("numero de pontos turisticos: %d\n", pontos01);

    printf("densidade populacional: %.2f\n", densidade01);

    printf("PIB per capta:%.2f\n", PIB01);


           
    printf("\ncomparacao de cartas:\n");

    printf("estado: %c\n", estado02);

    printf("codigo: %s\n", codigo02);

    printf("nome da cidade: %s\n", cidade02);

    printf("populacao: %lu\n", populacao02);

    printf("area: %.2f\n", areakm02);

    printf("PIB: %.2f\n", PIB02);

    printf("numero de pontos turisticos: %d\n", pontos02);

    printf("densidade populacional: %.2f\n", densidade02);

    printf("PIB per capta:%.2f\n", PIB02);


     printf("\nComparação de Cartas:\n");

     printf("População: Carta %d venceu (%d)\n",
            (populacao01 > populacao02) * 1 + (populacao02 >= populacao01) * 2,
            populacao01 > populacao02);
 
     printf("Área: Carta %d venceu (%d)\n",
            (areakm01 > areakm02) * 1 + (areakm02 >= areakm01) * 2,
            areakm01 > areakm02);
 
     printf("PIB: Carta %d venceu (%d)\n",
            (PIB01 > PIB02) * 1 + (PIB02 >= PIB01) * 2,
            PIB01 > PIB02);
 
     printf("Pontos Turísticos: Carta %d venceu (%d)\n",
            (pontos01 > pontos02) * 1 + (pontos02 >= pontos01) * 2,
            pontos01 > pontos02);
 
     printf("Densidade Populacional: Carta %d venceu (%d)\n",
            (densidade01 < densidade02) * 1 + (densidade01 > densidade02) * 2,
            densidade01 < densidade02);
 
     printf("PIB per Capita: Carta %d venceu (%d)\n",
            (PIB_per_capta01 > PIB_per_capta02) * 1 + (PIB_per_capta02 >= PIB_per_capta01) * 2,
            PIB_per_capta01 > PIB_per_capta02);
 
     printf("Super Poder: Carta %d venceu (%d)\n",
            (somapoder01 > somapoder02) * 1 + (somapoder02 >= somapoder01) * 2,
            somapoder01 > somapoder02);

          printf("\n");

    printf("--- Escolha um atributo para comparar ---\n");

    printf("1. População\n");

    printf("2. Área Total\n");

    printf("3. Pib do país\n");

    printf("4. Número de Pontos Turísticos\n");

    printf("5. Densidade Populacional\n");

    printf("6. Pib Per Capita\n");

    printf("Escolha a opção: ");

    scanf("%d", &opcao01);

     


        
       
switch(opcao01){

        case 1:

        // COMPARANDO OS ATRIBUTOS: POPULAÇÃO ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO)\n\n");

        printf("Carta 01 - %s (SP): %u\n", cidade01, populacao01);

        printf("Carta 02 - %s (RJ): %u\n", cidade02, populacao02);



        ataque01 = populacao01;

        ataque02 = populacao02;

        resultado01 = ataque01 > ataque02 ? 1 : 0;

       

        break;

        case 2:

        // COMPARANDO OS ATRIBUTOS: ÁREAKM² ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREAKM²)\n\n");

        printf("Carta 01 - %s (SP): %.2f\n", cidade01, areakm01);

        printf("Carta 02 - %s (RJ): %.2f\n", cidade02, areakm02);



        ataque01 = areakm01;

        ataque02 = areakm02;

        resultado01 = ataque01 > ataque02 ? 1 : 0;



        break;

        case 3:

        // COMPARANDO OS ATRIBUTOS: PIB ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB)\n\n");

        printf("Carta 01 - %s (SP): %.2f\n", cidade01, PIB01);

        printf("Carta 02 - %s (RJ): %.2f\n", cidade02, PIB02);



        ataque01 = PIB01;

        ataque02 = PIB02;

        resultado01 = ataque01 > ataque02 ? 1 : 0;

       

        break;

        case 4:

        // COMPARANDO OS ATRIBUTOS: PONTOS TURÍSTICOS ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PONTOS TURÍSTICOS)\n\n");

        printf("Carta 01 - %s (SP): %d\n", cidade01, pontos01);

        printf("Carta 02 - %s (RJ): %d\n", cidade02, pontos02);



        ataque01 = pontos01;

        ataque02 = pontos02;

        resultado01 = ataque01 > ataque02 ? 1 : 0;

       

        break;

        case 5:

        // COMPARANDO OS ATRIBUTOS: DENSIDADE POPULACIONAL

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE POPULACIONAL)\n\n");

        printf("Carta 01 - %s (SP): %.2f\n", cidade01, densidade01);

        printf("Carta 02 - %s (RJ): %.2f\n", cidade02, densidade02);



        ataque01 = densidade01;

        ataque02 = densidade02;

        resultado01 = ataque01 < ataque02 ? 1 : 0;

       

        break;

        case 6:

        // COMPARANDO OS ATRIBUTOS: PIB PER CAPITA ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB PER CAPITA)\n\n");

        printf("Carta 01 - %s (SP): %.2f\n", cidade01, PIB_per_capta01);

        printf("Carta 02 - %s (RJ): %.2f\n", cidade02, PIB_per_capta02);



        ataque01 = PIB_per_capta01;

        ataque02 = PIB_per_capta02;

        resultado01 = ataque01 > ataque02 ? 1 : 0;

       

        break;

        case 7:

        // COMPARANDO O SUPER PODER ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: COMPARANDO TODOS OS ATRIBUTOS (SUPER PODER!))\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", cidade01, superpoder01);

        printf("Carta 2 - %s (RJ): %.2f\n", cidade02, superpoder02);



        ataque01 = superpoder01;

        ataque02 = superpoder02;

        resultado01 = superpoder01 > superpoder02 ? 1 : 0;

        break;

        default:

        printf("Opção Inválida, Tente novamente!\n");

    }

    printf("\n\n*** MENU DE COMPARAÇÃO DOS ATRIBUTOS ***\n\n");

    printf("ATENÇÃO! você de escolher um atributo diferente.\n");

    printf("1. População!\n");

    printf("2. ÁreaKm²!\n");

    printf("3. PIB!\n");

    printf("4. Pontos Turísticos!\n");

    printf("5. Densidade Populacional!\n");

    printf("6. PIB Per Capita!\n");

    printf("7. Super Poder!\n");

    printf("Escolha uma das opções: ");

    scanf("%d", &opcao02);

    if(opcao01 == opcao02){

        printf("Mesmo atributo selecionado, por favor tente de novo\n");

    } else {

        switch(opcao02){

            case 1:

            // COMPARANDO OS ATRIBUTOS: POPULAÇÃO ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO)\n\n");

            printf("Carta 1 - %s (SP): %lu\n", cidade01, populacao01);

            printf("Carta 2 - %s (RJ): %lu\n", cidade02, populacao02);

   

            ataque01 = populacao01;

            ataque02 = populacao02;

            resultado02 = ataque01 > ataque02 ? 1 : 0;

           

            break;

            case 2:

            // COMPARANDO OS ATRIBUTOS: ÁREAKM² ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREAKM²)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", cidade01, areakm01);

            printf("Carta 2 - %s (RJ): %.2f\n", cidade02, areakm02);

   

            ataque01 = areakm01;

            ataque02 = areakm02;

            resultado02 = ataque01 > ataque02 ? 1 : 0;

   

            break;

            case 3:

            // COMPARANDO OS ATRIBUTOS: PIB ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", cidade01, PIB01);

            printf("Carta 2 - %s (RJ): %.2f\n", cidade02, PIB02);

   

            ataque01 = PIB01;

            ataque02 = PIB02;

            resultado02 = ataque01 > ataque02 ? 1 : 0;

           

            break;

            case 4:

            // COMPARANDO OS ATRIBUTOS: PONTOS TURÍSTICOS ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PONTOS TURÍSTICOS)\n\n");

            printf("Carta 1 - %s (SP): %d\n", cidade01, pontos01);

            printf("Carta 2 - %s (RJ): %d\n", cidade02, pontos02);

   

            ataque01 = pontos01;

            ataque02 = pontos02;

            resultado02 = ataque01 > ataque02 ? 1 : 0;

           

            break;

            case 5:

            // COMPARANDO OS ATRIBUTOS: DENSIDADE POPULACIONAL

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE POPULACIONAL)\n\n");

            printf("Carta 01 - %s (SP): %.2f\n", cidade01, densidade01);

            printf("Carta 02 - %s (RJ): %.2f\n", cidade02, densidade02);

   

            ataque01 = densidade01;

            ataque02 = densidade02;

            resultado02 = ataque01 < ataque02 ? 1 : 0;

           

            break;

            case 6:

            // COMPARANDO OS ATRIBUTOS: PIB PER CAPITA ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB PER CAPITA)\n\n");

            printf("Carta 01 - %s (SP): %.2f\n", cidade01, PIB_per_capta01);

            printf("Carta 02 - %s (RJ): %.2f\n", cidade02, PIB_per_capta02);

   

            ataque01 = PIB_per_capta01;

            ataque02 = PIB_per_capta02;

            resultado02 = ataque01 > ataque02 ? 1 : 0;

           

            break;

            case 7:

            // COMPARANDO O SUPER PODER ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: COMPARANDO TODOS OS ATRIBUTOS (SUPER PODER!))\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", cidade01, superpoder01);

            printf("Carta 2 - %s (RJ): %.2f\n", cidade02, superpoder02);

   

            ataque01 = superpoder01;

            ataque02 = superpoder02;

            resultado02 = superpoder01 > superpoder02 ? 1 : 0;

            break;

            default:

            printf("Opção Inválida, Tente novamente!\n");

        }

        if (resultado01 && resultado02){

            printf("\n\nParabéns, você ganhou!\n\n");

        } else if(resultado01 != resultado02){

            printf("Houve um empate!\n");

        } else {

            printf("Infelizmente, você perdeu!");

        }

    }

return 0;

}
       