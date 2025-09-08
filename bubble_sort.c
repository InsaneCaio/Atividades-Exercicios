#include <stdio.h>

    /*
        Basicamente um código que irá organizar os numeros de forma crescente
        utilizando o método Bubble Sort.
        O qual é feito por ver se o numero atual é maior que o proximo; se for,
        ele troca a posição entre esses dois numeros.
    */

int main(){
    int num;
    printf("Digite a quantidade de digitos que serao introduzidos: ");
    scanf("%d", &num);
    int mat[num], aux, cont = 0;
    printf("Digite os numeros inteiros que serao organizados: (ao inves de apertar ENTER toda vez, separe os numeros com um ESPAÇO)\n");
    for (int i = 0; i < num; i++)
        scanf("%d", &mat[i]);
    do{
        cont = 0;
        for (int i = 0; i < num-1; i++){
            if (mat[i] > mat[i+1]){
                aux = mat[i];
                mat[i] = mat[i+1];
                mat[i+1] = aux;
                cont++;
            }
        }
    } while (cont > 0);
    for (int i = 0; i < num; i++){
        printf("%d ", mat[i]);
    }
}