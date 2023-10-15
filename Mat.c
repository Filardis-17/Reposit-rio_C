/* Programa de funcoes matemáticas */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int nota1, nota2, nota3, soma;
    double media;

    printf("Digite as tres notas: \n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    soma = nota1 + nota2 + nota3;
    printf("SOMA = %d\n", soma);

    media = (double) soma / 3;
    printf("MEDIA = %.2lf\n", media);


    return 0;


}
