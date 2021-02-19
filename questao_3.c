#include <stdio.h>

main(){
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    //p é representa o endereço da variavel i

    //*p + 2 representa o valor da variavel i + 2, logo, 7

    /*
    **&p, fazendo por parte, temos:
            &p representa o endereço do ponteiro p.
            *&p representa o valor do que está no endereço do ponteiro, ou seja, o endereço da variavel.
            **&p representa o valor da variavel que p guarda o endereço, logo, 5.
    */

    //3**p representa o produto de 3 pelo valor da variavel que p possui o endereço, logo, 15

    /*
        Usando a terceira explicação conclui-se que **&p representa o valor da variavel i, logo,
    **&p + 4 = 9
    */
    return 0;
}
