#include <stdio.h>

int main(){
    int i = 2, j = 5, *p, *q;

    p = &i;
    q = &j;
    i = (*p) + *q;
    q = *p;

    printf("%i", i);
    return 0;
}
