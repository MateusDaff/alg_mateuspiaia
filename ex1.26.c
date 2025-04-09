#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //variáveis
    float celsius;
    float fahren;

    //input
    printf ( "Forneca a temperatura em Celsius\n" );
    scanf ( "%f", &celsius );

    //fórmula
    fahren = 1.8 * celsius + 32;

    //imprimindo resultado  
    printf ( "%.2f graus Celsius correspondem a %.2f graus Fahrenheit", celsius, fahren );

    return 0;

}