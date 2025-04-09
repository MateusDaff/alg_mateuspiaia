#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //RETÂNGULO

    //declarando variáveis básicas do retângulo
    int largura;
    int altura;

    //declarando variávis dependentes das básicas
    int perimetro;
    int area;

    //pegando o input do usuário
    printf ( "qual a largura do retângulo? \n" );
    scanf ( "%d", &largura );
    printf ( "qual a altura do retângulo \n?" );
    scanf ( "%d", &altura );

    //fazendo contas
    perimetro = 2 * largura + 2 * altura;
    area = largura * altura;

    //exibindo resultados
    printf ( "Perimetro = %d\n", perimetro );
    printf ( "Area = %d\n", area );

    return 0;

}