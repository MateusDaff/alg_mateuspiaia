#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    float n1;
    float n2;
    float n3;
    float maior1;
    float maior2;
    float soma;

    printf ( "escolha um numero\n" );
    scanf ( "%f", &n1 );
    printf ( "escolha outro\n" );
    scanf ( "%f", &n2 );
    printf ( "escolha outro\n" );
    scanf ( "%f", &n3 );

    if ( n1 < n2 && n1 < n3 ) {

        maior1 = n2;
        maior2 = n3;

    } else if (n2 < n1 && n2 < n3) {

        maior1 = n1;
        maior2 = n3;

    } else if (n3 < n1 && n3 < n2) {

        maior1 = n1;
        maior2 = n2;

    }

    soma = maior1 + maior2;

    printf ( "A soma dos dois numeros maiores fornecidos e %.2f", soma );

    return 0;

}