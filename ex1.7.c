#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //QUADRADO

    int lado;
    int perimetro;
    int area;

    printf ( "qual o tamanho do lado do quadrado? \n" );
    scanf ( "%d", &lado );

    perimetro = lado * 4;
    area = lado * lado;

    printf ( "Perimetro = %d\n", perimetro );
    printf ( "Area = %d\n", area);

    return 0;

}