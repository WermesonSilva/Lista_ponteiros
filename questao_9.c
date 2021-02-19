#include <stdio.h>

int main() {
    int vet[] = {4,9,13};
    int i;

    for(i=0;i<3;i++){
        printf("%d ",*(vet+i));
    }
    /*
        O trecho acima serve para mostrar os valores do vetor vet nos seus respectivos
    indices. Como explicado em quest�es anteriores a express�o vet + i representa o
    endere�o de vet no indice, consequentemente a express�o *(vet + i) ir� reprsentar
    o valor de vet na posi��o i.
    */

    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }
    /*
        J� nesse trecho sabe-se que vet + 1representa o endere�o de vet no indice
    i, logo esse trecho ir� mostrar todos os endere�os de vet em seus indices.
    Como o vetor � de inteiro o endere�o na mem�ria d� um salto de 4 bytes de um
    endere�o para o outro.
    */

    return 0;
}
