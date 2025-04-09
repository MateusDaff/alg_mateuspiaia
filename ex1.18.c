#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //declarando variáveis
    float diagonalMaior;
    float diagonalMenor;
    float area;

    //input
    printf ( "Qual o tamanho da diagonal maior?\n" );
    scanf ( "%f", &diagonalMaior );
    printf ( "QUal o tamanho da diagonal menor?\n" );
    scanf ( "%f", &diagonalMenor );

    //formula
    area = ( diagonalMaior * diagonalMenor ) / 2;

    //output
    printf ( "Area = %.2f", area );

    return 0;

}