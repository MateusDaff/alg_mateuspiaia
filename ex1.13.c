#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //declarando variáveis de input
    float numerodUm;
    float numerodDois;

    //declarando variáveis onde serão armazenados os resultados das operações
    float soma;
    float sub;
    float mult;
    float div;

    //pegando input do usuário
    printf ( "insira um numero qualquer\n" );
    scanf ( "%f", &numerodUm );
    printf ( "insira outro\n" );
    scanf ( "%f", &numerodDois );

    //realizando operações e armazenando os resultados nas variáveis
    soma = numerodUm + numerodDois;
    sub = numerodUm - numerodDois;
    mult = numerodUm * numerodDois;
    div = numerodUm / numerodDois;

    //imprimindo os resultados
    printf ( "%.2f + %.2f = %.2f\n", numerodUm, numerodDois, soma );
    printf ( "%.2f - %.2f = %.2f\n", numerodUm, numerodDois, sub );
    printf ( "%.2f * %.2f = %.2f\n", numerodUm, numerodDois, mult );
    printf ( "%.2f / %.2f = %.2f", numerodUm, numerodDois, div );

    return 0;

}