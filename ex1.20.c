#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //variaveis para input do usuario
    int primeiroNum;
    int segundoNum;

    //variavel para resultado da media
    int media;

    //input do usuario
    printf ( "primeiro numero:\n" );
    scanf ( "%d", &primeiroNum );
    printf ( "segundo numero:\n" );
    scanf ( "%d", &segundoNum );

    //calculo da media aritmetica
    media = ( primeiroNum + segundoNum ) / 2;

    //imprimindo o resultado
    printf ( "Media aritmetica: %d", media );

    return 0;

}