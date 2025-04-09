#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    float numeroDecimal;
    
    printf ( "Escreva um numero qualquer \n" );
    scanf ( "%f", &numeroDecimal );

    printf ( "%f\n", numeroDecimal );
    printf ( "%.2f\n", numeroDecimal );
    printf ( "%.3f\n", numeroDecimal );

    return 0;

}