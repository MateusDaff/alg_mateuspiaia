#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    float fahren;
    float celsius;

    printf ( "Qual a temperatura, em fahrenheit?\n" );
    scanf ( "%f", &fahren );

    celsius = ( fahren - 32 ) / 1.8;

    printf ( "%.2f graus Fahrenheit correspondem a %.2f graus Celsius", fahren, celsius );

    return 0;

}