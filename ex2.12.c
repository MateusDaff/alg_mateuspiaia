#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //idades das pessoas
    int m1;
    int m2;
    int h1;
    int h2;

    //variavel temporaria para substituir valores
    int temp;

    //variáveis das contas
    int soma;
    int mult;

    //input do usuário
    printf ( "insira idades de 2 homens e 2 mulheres\n" );
    scanf ( "%d", &h1 );
    scanf ( "%d", &h2 );
    scanf ( "%d", &m1 );
    scanf ( "%d", &m2 );

    //m1 será a mais velha e m2 a mais nova, o mesmo para homens. Usando uma variável temporária para substituir arquivos
    if ( m1 < m2 ) {

        temp = m1;
        m1 = m2;
        m2 = temp;

    }

    if ( h1 < h2 ) {

        temp = h1;
        h1 = h2;
        h2 = temp;

    }

    //contas
    soma = h1 + m2;
    mult = h2 * m1;

    //resultados
    printf ( "Idade homem mais velho + idade mulher mais nova: %d\n", soma );
    printf ( "Idade homem mais novo * idade mulher mais velha: %d", mult );

    return 0;

}