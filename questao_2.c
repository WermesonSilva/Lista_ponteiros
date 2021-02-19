#include <stdio.h>

int main(){
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    //Como p é recebeu o endereço de i, então p == &i possui valor verdadeiro
    if (p == &i) {
        printf("Primeira expressão igual a: verdadeiro.\n");
    } else {
        printf("Primeira expressão igual a: falso.\n");
    }

    //Como *p representa o valor da variavel do endereço que p guarda (o mesmo vale para q), entao temos:
    int valor = 0;
    valor = *p - *q;
    printf("Valor da expressao *p - *q: %i\n", valor);

    //printf(**&p);

    //Para a terceira expressao teremos:
    //  r = 3 - *p/(*q) + 7 = 3 - 3 / 5 + 7
    //  r = 27/5
    float r;
    r = 3 - *p/(*q) + 7;
    printf("A expressao 3 - *p/(*q) + 7 vale: %f\n", r);

    return 0;
}
