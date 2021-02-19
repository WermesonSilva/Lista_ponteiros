#include <stdio.h>
#include <stdlib.h>

/*
    Função de comparação para servir como argumento da função qsort(). A função qsort()
pode por em ordem vários tipos de dados, tudo vai depender da função de comparação, já
que ela é a serponsável por comparar valor por valor. Caso o parâmetro a seja igual ao
parâmetro b, então eles não precisam trocar de lugar e para indendificar isso é retornado
o valor 0. Caso a seja maior que b, então eles não precisam trocar de lugar caso a ordenação
seja crescente e nesse caso é retornado o valor 1 para indicar isso. Por fim, caso a seja
menor que b, eles devem trocar de posição e para indicar isso à função qsort, a função
compara retorna -1.
*/
int compara(const void *a, const void *b) {
    /*
        Neste trecho será transformados os ponteiros void para o tipo ponteiro
    para inteiro e logo em seguida é feita a operação para saber o valor que
    os ponteiros guardam.
    */
    if (*(int*) a == *(int*) b) {
        return 0;
    } else if (*(int*)a < *(int*)b) {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    //Ponteiro para realizar a alocação dinâmica
    float *nums;
    //Quantidade de valores que serão alocados
    int n;

    printf("Quantidade de valores: ");
    scanf("%i", &n);
    //Reservando o espaço para a alocação dinâmica
    nums = malloc(n * sizeof(float));
    for (int y = 0; y < n; y++) {
        printf("Digite um valor [%i]: ", y + 1);
        scanf("%f", &nums[y]);
    }

    /*
        A função qsort() recebe 4 argumentos: primeiro o endereço da primeira posição
    dos valores. Segundo a quantidade de termos presentes no ponteiro. Terceiro o
    tamanho dos em bytes dos dados guardados em cada posição. Quarto a função responsável
    por determinar a comparação entre os valores.
    */
    qsort(nums, n, sizeof(float), compara);

    for (int y = 0; y < n; y++) {
        printf("valor[%d]: %.1f ", (y + 1), nums[y]);
    }

    free(nums);
    return 0;
}
