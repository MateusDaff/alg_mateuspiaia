#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    int diagonalMaior;
    int diagonalMenor;
    int area;

    printf ( "qual o tamanho da diagonal menor? \n" );
    scanf ( "%d", &diagonalMenor );
    printf ( "qual o tamanho da diagonal maior \n" );
    scanf ( "%d", &diagonalMaior );

    area = ( diagonalMaior * diagonalMenor ) / 2;

    printf ( "Area = %d", area );
    
    return 0;

}