/* Primeiro program em C */
#include<stdio.h> /* Biblioteca que retorna funções de entradad e saída de dados*/
#include<stdlib.h> /* Biblioteca de retorno da função 'system' */
#include<string.h> /* Biblioteca que retornar funções de string, como STRCPY */
#include<math.h> /* Biblioteca que retorna funções aritméticas */

int main(){

    int idade = 22;
    double salario = 8, adicional;
    char sexo = 'M';
    char mentalidade[50];

    printf(" ------- Descrição Pessoal -------\n\n");
    printf("Minha idade e: %d\n", idade);
    printf("Ganho aproximadamente: %.2lf\n", salario);
    printf("Sou do sexo: %c\n", sexo);
    strcpy(mentalidade, "Alfa");
    printf("Minha mentalidade e: %s\n\n", mentalidade);


    printf("o valor novo do salario e: %.2lf\n\n", pow(salario, 2)); /* Pow é uma funcao aritmética de potenciação*/



    return 0;

}
