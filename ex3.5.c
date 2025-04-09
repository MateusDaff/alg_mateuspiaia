#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //variavel
    int numero;

    //input do usuario
    printf ( "forneca um numero maior ou igual a zero: " );
    scanf ( "%d", &numero );

    //checando se o input esta correto
    if ( numero >= 0 ) {

        //exibindo numeros de 0 até o numero escolhido
        for ( int i = 0; i <= numero; i++ ) {

            printf ( "%d ", i );

        }

    } else {

        printf ( "Valor incorreto (negativo)" );

    }

    return 0;

}