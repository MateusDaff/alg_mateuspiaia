#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //declcarando variáveis básicas (onde será armazenado o input do usuário)
    float altura;
    float largura;

    //declarando variáveis dependentes de altura e largura
    float perimetro;
    float area;

    //pegando input do usuário
    printf ( "insira a altura do retangulo\n" );
    scanf ( "%f", &altura );
    printf ( "insira a largura do retângulo\n" );
    scanf ( "%f", &largura );

    //fazendo contas com o input
    perimetro = 2 * altura + 2 * largura;
    area = altura * largura;

    //imprimindo o perimetro e a area do retangulo
    printf ( "Perimetro = %.2f\n", perimetro );
    printf ( "Area = %.2f\n", area );

    return 0;

}