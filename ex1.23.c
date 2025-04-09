#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //variáveis de input
    int anoNascimento;
    int anoAtual;

    //variável para a conta
    int idade;


    //pegando input
    printf ( "qual o seu ano de nascimento?\n" );
    scanf ( "%d", &anoNascimento );
    printf ( "em que ano estamos?\n" );
    scanf ( "%d", &anoAtual );

    //calculando idade aproximada
    idade = anoAtual - anoNascimento;

    //imprimindo idade aproximada
    printf ( "Idade aproximada: %d anos", idade );

    return 0;

}