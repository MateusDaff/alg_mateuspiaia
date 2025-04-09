#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //variavel pro input
    int numero;

    //pedindo e obtendo input
    printf ( "forneca um numero inteiro maior ou igual a 0: " );
    scanf ( "%d", &numero );

    //checando se o numero é valido (maior ou igual a zero)
    if ( numero >= 0 ) {

        for ( int i = numero; i >= 0; i-- ) {

            printf ( "%d ", i );

        }

    } else {

        printf ( "Valor incorreto (negativo)" );

    }

    return 0;

}