#include <stdio.h>
#include <stdlib.h>

    /*
        Código simples que usa a função qsort() da biblicoteca padrão de C
    */


int maior(const void *a, const void *b){
    return *(const int *)a -  *(const int *)b;
}

int main(){
    int num;
    printf("\nDIGITE A QUANTIDADE DE ELEMENTOS DA MATRIZ >>> ");
    scanf("%d", &num);
    int mat[num];

    printf("DIGITE OS VALORES DA MATRIZ: ");
    for (int i = 0; i < num; i++)
        scanf("%d", &mat[i]);

    qsort(mat, num, sizeof(int), maior);
    printf("\n");
    for (int i = 0; i < num; i++)
        printf("%d ", mat[i]);
    return 0;
}