#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    int numeroUm;
    int numeroDois;
    int numeroTres;

    printf ( "insira um numero:\n" );
    scanf ( "%d", &numeroUm );
    printf ( "insira outro:\n" );
    scanf ( "%d", &numeroDois );
    printf ( "insira outro:\n" );
    scanf ( "%d", &numeroTres );

    if ( numeroUm <= numeroDois && numeroDois <= numeroTres ) {

        printf ( "%d <= %d <= %d\n", numeroUm, numeroDois, numeroTres);

    } else if ( numeroUm <= numeroTres && numeroTres <= numeroDois ) {

        printf ( "%d <= %d <= %d\n", numeroUm, numeroTres, numeroDois );

    } else if ( numeroDois <= numeroUm && numeroUm <= numeroTres ) {

        printf ( "%d <= %d <= %d\n", numeroDois, numeroUm, numeroTres );

    } else if ( numeroDois <= numeroTres && numeroTres <= numeroUm ) {

        printf ( "%d <= %d <= %d\n", numeroDois, numeroTres, numeroDois );

    } else if ( numeroTres <= numeroUm && numeroUm <= numeroDois ) {

        printf ( "%d <= %d <= %d\n", numeroTres, numeroUm, numeroDois );

    } else if ( numeroTres <= numeroDois && numeroDois <= numeroUm) {

        printf ( "%d <= %d <= %d\n", numeroTres, numeroDois, numeroUm );

    }

    //3 variaveis temporarias - if; se crescente: n1>n2, substituir

    return 0;

}