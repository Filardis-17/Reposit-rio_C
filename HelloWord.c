/* Primeiro program em C */
#include<stdio.h> /* Biblioteca que retorna fun��es de entradad e sa�da de dados*/
#include<stdlib.h> /* Biblioteca de retorno da fun��o 'system' */
#include<string.h> /* Biblioteca que retornar fun��es de string, como STRCPY */
#include<math.h> /* Biblioteca que retorna fun��es aritm�ticas */

int main(){

    int idade = 22;
    double salario = 8, adicional;
    char sexo = 'M';
    char mentalidade[50];

    printf(" ------- Descri��o Pessoal -------\n\n");
    printf("Minha idade e: %d\n", idade);
    printf("Ganho aproximadamente: %.2lf\n", salario);
    printf("Sou do sexo: %c\n", sexo);
    strcpy(mentalidade, "Alfa");
    printf("Minha mentalidade e: %s\n\n", mentalidade);


    printf("o valor novo do salario e: %.2lf\n\n", pow(salario, 2)); /* Pow � uma funcao aritm�tica de potencia��o*/



    return 0;

}
