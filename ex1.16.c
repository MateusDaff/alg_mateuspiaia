#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    
    //variáveis básicas
    float base;
    float altura;
    //área (depende de base e altura)
    float area;

    //input do usuário
    printf ( "Qual o tamanho da base do triangulo?\n" );
    scanf ( "%f", &base );
    printf ( "Qual a altura do triangulo?\n" );
    scanf ( "%f", &altura );
    
    //calculo da area
    area = ( base * altura ) / 2;

    //imprimindo a area com 2 casas decimais de precisao
    printf ( "Area = %.2f", area );



    return 0;

}