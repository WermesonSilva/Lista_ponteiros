#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compara(const void *a, const void *b) {
    if (*(int*) a == *(int*) b) {
        return 0;
    } else if (*(int*)a < *(int*)b) {
        return -1;
    } else {
        return 1;
    }
}

int comparar(float a, float b) {
    if (a == b) {
        return 0;
    } else if (a < b) {
        return -1;
    } else {
        return 1;
    }
}

void ordenar(float *vet, int taman, int (*fun) (float, float)) {
    float aux = 0;
    for (int y = 0; y < taman; y++) {
        for (int x = 0; x < taman; x++) {
            if (fun(vet[y], vet[x]) == -1) {
                aux = vet[x];
                vet[x] = vet[y];
                vet[y] = aux;
            }
        }
    }
}

int main() {
    float *nums, tempo;
    time_t inicio, fim;

    inicio = clock();
    nums = malloc(10000 * sizeof(float));
    for (int y = 0; y < 10000; y++) {
        nums[y] = 10000 - y;
    }

    qsort(nums, 10000, sizeof(float), compara);

    fim = clock();
    tempo = (float) (fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %.10f\n", tempo);
    /////////////////////////////////////////////
    inicio = clock();
    for (int y = 0; y < 10000; y++) {
        nums[y] = 10000 - y;
    }
    ordenar(nums, 10000, comparar);
    fim = clock();
    tempo = (float) (fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %.10f", tempo);

    free(nums);
    return 0;
}
