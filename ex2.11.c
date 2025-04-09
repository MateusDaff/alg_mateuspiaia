#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ( void ) {

    float angA;
    float angB;
    float angC;

    bool existe;

    printf ( "forneca os tres angulos do triangulo\n" );
    scanf ( "%f", &angA );
    scanf ( "%f", &angB );
    scanf ( "%f", &angC );

    //checando se o triangulo é  existente
    if ( (angA + angB + angC) <= 180 ) {

        existe = true;

    } else {

        existe = false;

    }

    //definindo o que ele é
    if ( existe == true ) {

        if ( angA == 90 || angB == 90 || angC == 90 ) {

            printf ( "Triangulo RETANGULO" );

        } else if ( angA > 90 || angB > 90 || angC > 90 ) {

            printf ( "Triangulo OBTUSANGULO" );

        } else if ( angA < 90 && angB < 90 && angC < 90 ) {

            printf ( "Triangulo ACUTANGULO" );

        }

    } else {

        printf ( "As medidas fornecidas dos angulos nao representam um triangulo valido!" );

    }

    return 0;

}