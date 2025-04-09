#include <stdio.h>
#include <stdlib.h>

//declarando a função para tirar a media
float media ( float x, float y );

int main ( void ) {

    //variáveis
    float nota1;
    float nota2;
    float optativa;
    float med;

    //input do usuário
    printf ( "forneca as suas duas notas principais e a optativa. Se nao tiver optativa, forneca um valor negativo.\n" );
    scanf ( "%f", &nota1 );
    scanf ( "%f", &nota2 );
    scanf ( "%f", &optativa );

    //checando se a optativa é valida
    if ( optativa >=0 ) {

        //checando se a optativa é maior que alguma das duas principais
        if ( optativa > nota1 || optativa > nota2 ) {

            if ( optativa > nota1 ) {
                
                med = media ( optativa, nota2 );

            } else {

                med = media ( optativa, nota1 );

            }

        }

    //se a optativa "não existir (valor negativo)"
    } else {

        //media sem optativa
        med = media (nota1, nota2);

    }

    if ( med < 4 ) {

        printf ( "Media: %.2f\n", med );
        printf ( "Reprovado..." );

    } else if ( med >= 4 && med < 6 ) {

        printf ( "Media: %.2f\n", med );
        printf ( "Exame." );

    } else {

        printf ( "Media: %.2f\n", med );
        printf ( "Aprovado!" );

    }


    return 0;

}

//definindo a funcao que tira a media
float media ( float x, float y ) {

    return ( x + y ) / 2;
    
}