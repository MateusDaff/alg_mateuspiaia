#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    float valor;
    float metade;
    float triplo;
    
    printf ( "escolha um valor\n" );
    scanf ( "%f", &valor );

    metade = valor / 2;
    triplo = valor * 3;

    if ( valor > 20 ) {

        printf ( "A metade de %.2f e %.2f", valor, metade );

    } else {

        printf ( "O triplo de %.2f e %.2f", valor, triplo );    

    }

    return 0;

}