#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ( void ) {

    //definindo variáveis sobre o triângulo
    float ladoA;
    float ladoB;
    float ladoC;

    //variáveis para os módulos
    float modAB;
    float modAC;
    float modBC;

    //booleana para triangulo existente ou nao
    bool existe;

    //pedindo as medidas dos 3 lados
    printf ( "forneca a medida dos 3 lados de um triangulo\n" );
    scanf ( "%f", &ladoA );
    scanf ( "%f", &ladoB );
    scanf ( "%f", &ladoC );

    //definindo os MÓDULOS das subtracoes usadas nas formulas (VALORES ABSOLUTOS)
    if ( ( ladoA - ladoB ) < 0 ) {

        modAB = - ( ladoA - ladoB );

    } else {

        modAB = ladoA - ladoB;

    }

    if ( ( ladoA - ladoC ) < 0 ) {

        modAC = - ( ladoA - ladoC );

    } else {

        modAC = ladoA - ladoC;

    }

    if ( ( ladoB - ladoC ) < 0 ) {

        modBC = - ( ladoB - ladoC );

    } else {

        modBC = ladoB - ladoC;

    }

    //checando se o triangulo existe
    if ( modAB < ladoC && ladoC < (ladoA + ladoB)
     && modAC < ladoB && ladoB < (ladoA + ladoC) 
     && modBC < ladoA && ladoA < (ladoB + ladoC) ) {

        existe = true;

    } else {

        existe = false;

    }

    //definindo o QUE É ESTE TRIANGULO
    if (existe == true) {

        if (ladoA == ladoB && ladoB == ladoC) {

            printf ( "Triangulo EQUILATERO" );

        } else if (ladoA == ladoB 
            || ladoA == ladoC 
            || ladoB == ladoC) {

                printf ( "Triangulo ISOSCELES" );

        } else if (ladoA != ladoB && ladoB != ladoC && ladoC != ladoA) {

            printf ( "Triangulo ESCALENO" );

        }

    } else {

        printf ( "As medidas fornecidas dos lados nao representam um triangulo valido!" );

    }
    

    return 0;

}