#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //variável base para input
    int numero;

    //variáveis para armazenar resultados
    int sucessor;
    int antecessor;

    //input do usuário
    printf ( "Digite um numero inteiro:\n" );
    scanf ( "%d", &numero );

    //calculando o sucessor e o antecessor
    sucessor = numero + 1;
    antecessor = numero - 1;

    //imprimindo sucessores e antecessores
    printf ( "Sucessor de %d: %d\n", numero, sucessor );
    printf ( "Antecessor de %d: %d", numero, antecessor );

    return 0;

}