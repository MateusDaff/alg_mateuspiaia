#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //ÁREA DE TRIÂNGULO

    //variáves básicas
    int base;
    int altura;

    //variável dependente
    int area;

    //input do usuário
    printf ( "qual o tamanho da base do triangulo? \n" );
    scanf ( "%d", &base );
    printf ( "qual a altura do triangulo? \n" );
    scanf ( "%d", &altura );

    //conta da área do triângulo
    area = base * altura / 2;

    //imprimir o resultado
    printf ( "Area = %d", area );

    return 0;

}