#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    int numeroUm;
    int numeroDois;

    int soma;
    int sub;
    int mult;
    int div;

    //pedindo ao usuário o input
    printf ( "primeiro numero: \n" );

    //scanf, uma função BLOQUEANTE (que para o programa) para receber um determinado tipo de entrada
    scanf ( "%d", &numeroUm );

    printf ( "segundo numero: \n" );
    scanf ( "%d", &numeroDois );

    //fazendo as contas
    soma = numeroUm + numeroDois;
    sub = numeroUm - numeroDois;
    mult = numeroUm * numeroDois;
    div = numeroUm / numeroDois;

    printf ( "%d + %d = %d\n", numeroUm, numeroDois, soma );
    printf ( "%d - %d = %d\n", numeroUm, numeroDois, sub );
    printf ( "%d * %d = %d\n", numeroUm, numeroDois, mult );
    printf ( "%d / %d = %d\n", numeroUm, numeroDois, div );

    return 0;

}