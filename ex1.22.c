#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //variável para input
    float preco;

    //variáveis para contas
    float valorDesconto;
    float precoDesconto;

    //pegando input
    printf ( "forneca o preco do produto:\n" );
    scanf ( "%f", &preco );

    //fazendo contas
    valorDesconto = 0.09 * preco;
    precoDesconto = preco - valorDesconto;

    //imprimindo resultado
    printf ( "Preco de venda com 9%% de desconto: %.2f", precoDesconto );

    return 0;

}