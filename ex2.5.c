#include <stdio.h>
#include <stdlib.h>                         

int main ( void ) {

    int n1;
    int n2;
    int n3;

    printf ( "forneca um numero\n" );
    scanf ( "%d", &n1 );
    printf ( "forneca outro\n" );
    scanf ( "%d", &n2 );
    printf ( "forneca outro numero\n" );
    scanf ( "%d", &n3 );

    if ( n1 >= n2 && n2 >= n3 ) {

        printf ( "%d >= %d >= %d", n1, n2, n3 );

    } else if ( n1 >= n3 && n3 >= n2 ) {

        printf ( "%d >= %d >= %d", n1, n3, n2 );

    } else if ( n2 >= n1 && n1 >= n3 ) {

        printf ( "%d >= %d >= %d", n2, n1, n3 );

    } else if ( n3 >= n1 && n1 >= n2 ) {

        printf ( "%d >= %d >= %d", n3, n1, n2 );

    } else if ( n3 >= n2 && n2 >= n1 ) {

        printf ( "%d >= %d >= %d", n3, n2, n1 );

    }

    return 0;

}