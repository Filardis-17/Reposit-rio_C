/* Primeiro program em C */
#include<stdio.h> /* Biblioteca que retorna funções de entradad e saída de dados*/
#include<stdlib.h> /* Biblioteca de retorno da função 'system' */
#include<string.h> /* Biblioteca que retornar funções de string, como STRCPY */
#include<math.h> /* Biblioteca que retorna funções aritméticas */

int main(){

    int idade;
    double salario, adicional;
    char sexo = 'M';
    char posicao[50];

    printf(" ------- Descrica o Pessoal -------\n\n");
    printf("Minha idade e: ");
    scanf("%d", &idade);
    printf("Ganho aproximadamente: ");
    scanf("%lf", &salario);
    printf("Sou do sexo: %c\n", sexo);
    strcpy(posicao, "Estagiário");
    printf("Minha posicao e: %s\n\n", posicao);

    printf("------- Mais Operacoes -------\n\n");
    salario = pow(salario, 2);
    printf("O novo do salario e: %.2lf\n", salario); /* Pow é uma funcao aritmética de potenciação */
    printf("Digite o valor adicional, absoluto: ");
    scanf("%lf", &adicional);
    printf("Calculo da raiz, adicional: %.0lf\n", sqrt(adicional));



    return 0;

}
