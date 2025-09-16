#include <stdio.h>

int *bubble(int v[]);

int main(){
    int vetor[] = {9, 0, 2, 6, 4, 1, 3, 7, 8, 5};
    for (int i = 0; i < 10; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    bubble(vetor);
    for (int i = 0; i < 10; i++)
        printf("%d ", vetor[i]);
    return 0;
}

int *bubble(int v[]){
    int aux;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10-i; j++){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    return v;
}
