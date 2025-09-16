#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b);

int main(){
    int vetor[] = {9, 0, 2, 6, 4, 1, 3, 7, 8, 5};
    for(int i = 0; i < 10; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    qsort(vetor, 10, sizeof(int), comp);
    for(int i = 0; i < 10; i++)
        printf("%d ", vetor[i]);
}

int comp(const void *a, const void *b){
    return *(int*) a - *(int*) b;
}
