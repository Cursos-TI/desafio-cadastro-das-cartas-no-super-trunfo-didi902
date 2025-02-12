#include <stdio.h>

int main(){

    int idade;
    float altura;
    char nome[50];
    int matricula;

    printf("digite a sua idade: \n");
    scanf("%d", &idade);

    printf("digite sua altura: \n");
    scanf("%f", &altura);

    printf("digite o seu nome: \n");
    scanf("%s", &nome);

    printf("digite a sua matricula: \n");
    scanf("%d", &matricula);

    printf("nome do aluno: %s - matricula: %d\n", nome, matricula);
    printf("idade: %d - altura: %f\n", idade, altura);

    return 0;
}