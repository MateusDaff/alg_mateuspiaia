#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    float baseMaior;
    float baseMenor;
    float altura;

    float area;

    printf ( "Qual o valor da base maior?\n" );
    scanf ( "%f", &baseMaior );
    printf ( "Qual o valor da base menor?\n" );
    scanf ( "%f", &baseMenor );
    printf ( "Qual o valor da altura?\n" );
    scanf ( "%f", &altura );

    area = ( ( baseMaior + baseMenor ) * altura ) / 2;
    
    printf ( "Area = %.2f", area );

    return 0;

}