#include <stdio.h>
#include <stdlib.h>

/*
    Fun��o de compara��o para servir como argumento da fun��o qsort(). A fun��o qsort()
pode por em ordem v�rios tipos de dados, tudo vai depender da fun��o de compara��o, j�
que ela � a serpons�vel por comparar valor por valor. Caso o par�metro a seja igual ao
par�metro b, ent�o eles n�o precisam trocar de lugar e para indendificar isso � retornado
o valor 0. Caso a seja maior que b, ent�o eles n�o precisam trocar de lugar caso a ordena��o
seja crescente e nesse caso � retornado o valor 1 para indicar isso. Por fim, caso a seja
menor que b, eles devem trocar de posi��o e para indicar isso � fun��o qsort, a fun��o
compara retorna -1.
*/
int compara(const void *a, const void *b) {
    /*
        Neste trecho ser� transformados os ponteiros void para o tipo ponteiro
    para inteiro e logo em seguida � feita a opera��o para saber o valor que
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
    //Ponteiro para realizar a aloca��o din�mica
    float *nums;
    //Quantidade de valores que ser�o alocados
    int n;

    printf("Quantidade de valores: ");
    scanf("%i", &n);
    //Reservando o espa�o para a aloca��o din�mica
    nums = malloc(n * sizeof(float));
    for (int y = 0; y < n; y++) {
        printf("Digite um valor [%i]: ", y + 1);
        scanf("%f", &nums[y]);
    }

    /*
        A fun��o qsort() recebe 4 argumentos: primeiro o endere�o da primeira posi��o
    dos valores. Segundo a quantidade de termos presentes no ponteiro. Terceiro o
    tamanho dos em bytes dos dados guardados em cada posi��o. Quarto a fun��o respons�vel
    por determinar a compara��o entre os valores.
    */
    qsort(nums, n, sizeof(float), compara);

    for (int y = 0; y < n; y++) {
        printf("valor[%d]: %.1f ", (y + 1), nums[y]);
    }

    free(nums);
    return 0;
}
