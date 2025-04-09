#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //declarando variável do input do usuário
    float lado;

    //declarando variáveis dependentes do lado
    float perimetro;
    float area;

    //input do lado do quadrado
    printf ( "qual o tamanho do lado do quadrado?\n" );
    scanf ( "%f", &lado );

    //contas
    perimetro = lado * 4;
    area = lado * lado;

    //imprimindo resultados
    printf ( "Perimetro = %.2f\n", perimetro );
    printf ( "Area = %.2f\n", area );
    return 0;

}