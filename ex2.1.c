#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //variável
    int numero;

    //input
    printf ( "forneca um numero inteiro\n" );
    scanf ( "%d", &numero );

    if ( numero % 2 == 0 ) {

        printf ( "O numero %d e par.", numero );

    } else {

        printf ( "O numero %d e impar.", numero );

    }
    

    return 0;

}