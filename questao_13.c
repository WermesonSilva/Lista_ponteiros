#include <stdio.h>
#include <stdlib.h>

int main() {
    float *nums, aux;
    int n;

    printf("Quantidade de valores: ");
    scanf("%i", &n);
    nums = malloc(n * sizeof(float));
    for (int y = 0; y < n; y++) {
        printf("Digite um valor [%i]: ", y + 1);
        scanf("%f", &nums[y]);
    }

    for (int i = 0; i < n; i++) {
        for (int y = 0; y < n; y++) {
            if (y + 1 < n) {
                if (nums[y] > nums[y+1]) {
                    aux = nums[y+1];
                    nums[y+1] = nums[y];
                    nums[y] = aux;
                }
            }
        }
    }

    for (int y = 0; y < n; y++) {
        printf("%.1f ", nums[y]);
    }
    free(nums);
    return 0;
}
