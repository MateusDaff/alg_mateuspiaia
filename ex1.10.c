#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //TRAPÉZIO
    //declarando variáveis
    int baseMaior;
    int baseMenor;
    int altura;
    int area;

    //pegando input
    printf ( "qual o tamanho da base maior? \n" );
    scanf ( "%d", &baseMaior );
    printf ( "qual o tamanho da base menor? \n" );
    scanf ( "%d", &baseMenor );
    printf ( "qual a altura do trapezio? \n" );
    scanf ( "%d", &altura );

    //conta com os dados do usuário
    area = ( ( baseMaior + baseMenor ) * altura ) / 2;

    //imprimindo resultado
    printf ( "Area = %d", area );

    return 0;

}