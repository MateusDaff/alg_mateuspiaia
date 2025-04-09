#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    int numeroLados;
    float tamanhoLado;
    float perimetro;
    float area;

    printf ( "insira o numero de lados do poligono regular\n" );
    scanf ( "%d", &numeroLados );
    printf ( "insira o tamanho do lado do poligono regular\n" );
    scanf ( "%f", &tamanhoLado );

    perimetro = tamanhoLado * numeroLados;

    if ( numeroLados == 3 ) {

        printf ( "TRIANGULO de perimetro %.2f", perimetro );

    } else if ( numeroLados == 4 ) {

        area = tamanhoLado * tamanhoLado;
        printf ( "QUADRADO de area %.2f", area );

    } else if ( numeroLados == 5 ) {

        printf ( "PENTAGONO" );

    } else {

        printf ( "Poligono nao identificado" );

    }


    return 0;

}