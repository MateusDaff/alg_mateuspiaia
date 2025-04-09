#include <stdio.h>
#include <stdlib.h>

int main ( void ) {

    //declarando variáveis
    float horaAula;
    float quantAulas;
    float porcDesconto;

    float salario;
    float salarioLiquido;

    //input do usuário
    printf ( "Qual o valor da hora/aula?\n" );
    scanf ( "%f", &horaAula );
    printf ( "Quantas aulas\n?" );
    scanf ( "%f", &quantAulas );
    printf ( "Qual a porcentagem de desconto do INSS?\n" );
    scanf ( "%f", &porcDesconto );

    //contas
    salario = quantAulas * horaAula;
    salarioLiquido = salario - ( salario * ( porcDesconto / 100 ) );

    //imprimindo resultado com 2 casas decimais de precisão
    printf ( "Salario Liquido: %.2f", salarioLiquido );

    return 0;

}