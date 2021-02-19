#include <stdio.h>
#include <stdlib.h>

void soma_vetor(float *vetor1, float *vetor2, float *vetor3, int quant) {
    for (int x = 0; x < quant; x++) {
        vetor3[x] = vetor1[x] + vetor2[x];
    }
}

int main() {
    float *vetor1, *vetor2, *vetor_soma;
    int taman1, taman2;

    printf("Tamanho primeiro vetor: ");
    scanf("%d", &taman1);
    vetor1 = malloc(taman1 * sizeof(float));
    for (int x = 0; x < taman1; x++) {
        printf("Valor [%d]: ", x);
        scanf("%f", &vetor1[x]);
    }
    printf("Tamanho segundo vetor: ");
    scanf("%d", &taman2);
    vetor2 = malloc(taman2 * sizeof(float));
    for (int x = 0; x < taman2; x++) {
        printf("Valor [%d]: ", x);
        scanf("%f", &vetor2[x]);
    }
    if (taman1 != taman2) {
        printf("Impossível realizar soma.");
    } else {
        soma_vetor(vetor1, vetor2, vetor_soma, taman1);
        printf("Valores do vetor soma: ");
        for (int x = 0; x < taman1; x++) {
            printf("%1.f ", vetor_soma[x]);
        }
    }
    free(vetor1);
    free(vetor2);
    free(vetor_soma);
    return 0;
}
