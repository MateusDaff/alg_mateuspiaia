#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
   
    //variável base raio
    float raio;

    //armazenando a constante pi em uma variável para contas
    float pi = 3.141592;

    //parâmetros do círculo
    float diametro;
    float circunferencia;
    float area;

    //input do usuário
    printf ( "qual o raio da circunferencia?\n" );
    scanf ( "%f", &raio );

    //fórmulas
    diametro = raio * 2;
    circunferencia = 2 * pi * raio;
    area = pi * ( raio * raio ) ;

    //output
    printf ( "Diametro = %.2f\n", diametro );
    printf ( "Circunferencia = %.2f\n", circunferencia );
    printf ( "Area = %.2f", area );

    return 0;

}