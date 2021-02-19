#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);
    /*
        Mostou o esperado (20), j� que no comando *p1 = 20 o valor da variavel valor
    recebeu o numero 20.
    */

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);
    /*
        Mostou o esperado (29.0), j� que no comando *p2 = 29.0 o valor da variavel temp
    recebeu o numero 29.0.
    */

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    /*
        Mostou o esperado (P), j� que aux = *p3 faz com que a variavel aux receba
    o valor do primeiro indice do array "Ponteiro", ou seja, P.
    */

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    /*
        Mostou o esperado (e), j� que aux = *p3 faz com que a variavel aux receba
    o valor do quinto indice do array "Ponteiro", ou seja, e.
    */

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);
    /*
        Mostou o esperado (p), j� que p3 = nome faz com que a variavel p3 receba
    o endere�o que o ponteiro nome guarda, como no printf usou-se *p3 ent�o ser�
    mostrado o valor do primeiro indice do array "Ponteiro", ou seja, P.
    */

    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);
    /*
        Mostou o esperado (e), j� que p3 = p3 + 4 indica que o endere�o que p3 guarda
    deve ser somado mais 4, nesse caso o ponteiro dar� 4 saltos do tamanho de um char,
    logo, ir� recber o endere�o do quinto indece do array "Ponteiro", ao executar o
    comando *p3 ser� exibido o valor do indice que p3 guarda o endere�o, ou seja, e.
    */

    /* (g) */
    p3--;
    printf("%c \n", *p3);
    /*
        Mostou o esperado (t), j� que p3-- indica que o endere�o que p3 guarda
    deve ser subtriado uma unidade, nesse caso o ponteiro dar� 1 salto do tamanho
    de um char, logo, ir� recber o endere�o do quarto indece do array "Ponteiro",
    ao executar o comando *p3 ser� exibido o valor do indice que p3 guarda o
    endere�o, ou seja, t.
    */

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);
    /*
        Mostou o esperado (31), usando o raciocinio dos itens anteriores,
    conclui-se que p4 possui o endere�o do primeiro indice do Vetor vetor,
    ao determinar idade = *p4, a variavel idade receber� o valor do primeiro
    indice do vetor, ou seja, 31.
    */

     /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);
    /*
        Mostou o esperado (45), pois p4 + 1 representa que p5 receber� o
    endere�o de p4 somado ao tamanho de memoria reservado para um inteiro,
    logo, p5 guarda o endere�o do segundo indice do vetor. Como idade = *p5,
    ent�o idade ter� o mesmo valor que o segundo indice do vetor, ou seja, 45.
    */

    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);
    /*
        Mostou o esperado (27), pois p4 guarda o endere�o do terceiro indice
    do vetor e como idade = *p4, ent�o idade ter� o mesmo valor do terceiro
    indice, ou seja, 27.
    */

    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);
    /*
        Mostou o esperado (31), pois p4 passou a guardar o endere�o do
    primeiro indice do vetor e como idade = *p4, ent�o idade ter� o mesmo
    valor do primeiro indice, ou seja, 31.
    */

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);
    /*
        Mostou o esperado (45), pois p5 passou a guardar o endere�o do
    segundo indice do vetor, ent�o *p5 ter� o mesmo valor do segundo indice,
    ou seja, 45.
    */

    /* (n) */
    p5;
    printf("%d \n", *p5);
    /*
        Mostou o esperado (45), pois como p5 n�o sofreu nenhuma opera��o ent�o
    nada mudou e *p5 continua possuindo mesmo valor do segundo indice,
    ou seja, 45.
    */

    return 0;
}
