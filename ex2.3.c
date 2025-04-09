#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    int numeroUm;
    int numeroDois;

    printf ( "forneca um numero inteiro:\n" );
    scanf ( "%d", &numeroUm );
    printf ( "forneca outro numero inteiro\n" );
    scanf ( "%d", &numeroDois );

    if (numeroUm >= numeroDois){

        printf ( "Ordem decrescente: %d >= %d", numeroUm, numeroDois );

    } else {

        printf ( "Ordem decrescente: %d >= %d", numeroDois, numeroUm );

    }

    return 0;

}