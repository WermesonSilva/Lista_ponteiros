#include <stdio.h>
#include <stdlib.h>

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
    float *nums;
    int quant;

    printf("quantiade de valores: ");
    scanf("%d", &quant);
    nums = malloc(quant * sizeof(float));
    for (int t = 0; t < quant; t++) {
        printf("valor [%d]: ", t);
        scanf("%f", &nums[t]);
    }
    printf("Vetor ordenado: ");
    ordenar(nums, quant, comparar);
    for (int t = 0; t < quant; t++) {
        printf("%.1f ", nums[t]);
    }
    free(nums);
    return 0;
}
