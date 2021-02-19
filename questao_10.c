#include <stdio.h>

int main() {
    char x1[4];
    int x2[4];
    float x3[4];
    double x4[4];
    int i;

    /*
        Como esperado � visto que o endere�o inicial de x1 salta 1 byte de indice para
    do vetor. Logo, se o endere�o do primeiro indice fosse 4092, ent�o do segundo seria
    4093, do terceiro 4094, e assim sucessivamente.
    */
    printf("Enderecos de x (char): ");
    for (i = 0; i <= 3; i++) {
        printf("%x ", x1 + i);
    }
    printf("\n");

    /*
        N�o acontece como o esperado, pois � visto que o endere�o inicial de x2 salta 4 bytes
    de indice para indice do vetor e n�o 2 bytes. Logo, se o endere�o do primeiro indice
    fosse 4092, ent�o o do segundo seria 4096, do terceiro 409a, e assim sucessivamente.
    */
    printf("Enderecos de x (int): ");
    for (i = 0; i <= 3; i++) {
        printf("%x ", x2 + i);
    }
    printf("\n");

    /*
        Como esperado � visto que o endere�o inicial de x3 salta 4 bytes de indice para
    indice do vetor. Logo, se o endere�o do primeiro indice fosse 4092, ent�o do segundo
    seria 4096, do terceiro 409a, e assim sucessivamente.
    */
    printf("Enderecos de x (float): ");
    for (i = 0; i <= 3; i++) {
        printf("%x ", x3 + i);
    }
    printf("\n");

    /*
        Como esperado � visto que o endere�o inicial de x4 salta 8 bytes de indice para
    indice do vetor. Logo, se o endere�o do primeiro indice fosse 4092, ent�o do segundo
    seria 409a, do terceiro 40a3, e assim sucessivamente.
    */
    printf("Enderecos de x (double): ");
    for (i = 0; i <= 3; i++) {
        printf("%x ", x4 + i);
    }
    printf("\n");

    return 0;
}
