#include <stdio.h>

int main() {
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;

    f = vet;
    printf("%.1f", *f);
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);
        printf("vet[%d] = %.1f",i, vet[i]);
        printf("*(f + %d) = %.1f",i, *(f+i));
        printf("&vet[%d] = %X",i, &vet[i]);
        printf("(f + %d) = %X",i, f+i);
    }
    /*
        O valores corresponderam ao esperado, pois vet[i] representa o valor de vet no
    indice i e de mesmo modo *(f+i) tamb�m representa o valor de vet no indice i, logo,
    ambos valores s�o iguais. &vet[i] representa o endere�o de vet no indice i e de
    mesmo modo f + 1 tamb�m representa o endere�o de vet no indice i, logo, ambos os
    endere�os s�o iguais.
    */
    return 0;
}
