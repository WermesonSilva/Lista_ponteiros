#include <stdio.h>

int main() {
    int vet[] = {4,9,13};
    int i;

    for(i=0;i<3;i++){
        printf("%d ",*(vet+i));
    }
    /*
        O trecho acima serve para mostrar os valores do vetor vet nos seus respectivos
    indices. Como explicado em questões anteriores a expressão vet + i representa o
    endereço de vet no indice, consequentemente a expressão *(vet + i) irá reprsentar
    o valor de vet na posição i.
    */

    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }
    /*
        Já nesse trecho sabe-se que vet + 1representa o endereço de vet no indice
    i, logo esse trecho irá mostrar todos os endereços de vet em seus indices.
    Como o vetor é de inteiro o endereço na memória dá um salto de 4 bytes de um
    endereço para o outro.
    */

    return 0;
}
