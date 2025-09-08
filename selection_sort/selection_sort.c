#include <stdio.h>

    /*
        Basicamente um código que irá organizar os numeros de forma crescente
        utilizando o método Selection Sort.
        O qual é feito por andar pelo vetor procurando algum valor maior do que
        o numero que foi analisado, e sempre que for achado tal numero eles trocarao
        de posição.
        Sendo executado até chegar ao penultimo digito da sequência.
    */


int main(){
    int num;
    printf("Digite a quantidade de digitos que serao introduzidos: ");
    scanf("%d", &num);
    int pos, aux, mat[num];
    
    printf("Digite os numeros inteiros que serao organizados: (ao inves de apertar ENTER toda vez, separe os numeros com um ESPAÇO)\n");
    for (int i = 0; i < num; i++)
        scanf("%d", &mat[i]);
    for (int i = 0; i < num-1; i++){
        pos = i;
        for (int j = i+1; j < num; j++){
            if (mat[j] < mat[pos]){
                pos = j; 
            }
        }
        aux = mat[i];
        mat[i] = mat[pos];
        mat[pos] = aux;
    }
    for (int i = 0; i < num; i++)
        printf("%d ", mat[i]);
} 