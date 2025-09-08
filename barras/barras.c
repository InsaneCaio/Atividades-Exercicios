#include <stdio.h>
 
    /* 
       Programa onde você entra com o numero de colunas desejadas
       em seguida, qual o valor de cada coluna, então ele ira mostrar
       como se fosse um gráfico com 0 e 1.
       0 - espaço vazio
       1 - parte da coluna (espaço contavél) 
    */
int main() {
    int maiorAva = 0, qtdeCol, picoMax;

    printf("Digite o numero de coluinas que deseja para o grafico: ");
    scanf("%d", &qtdeCol);
    int avaBrinq[qtdeCol];

    for (int i = 0; i < qtdeCol; i++){
        printf("Digite o valor do %do item: ", i+1);
        scanf("%d", &avaBrinq[i]);
        if (avaBrinq[i] > maiorAva){
            maiorAva = avaBrinq[i];
        }
    }
    picoMax = maiorAva;
    int tabBrinq[maiorAva][qtdeCol];

    for (int i = 0; i < maiorAva; i++){
        for (int j = 0; j < qtdeCol; j++){
            if (avaBrinq[j] >= picoMax){
                tabBrinq[i][j] = 1;
            }
            else{
                tabBrinq[i][j] = 0;
            }
        }
        picoMax--;
    }
    printf("\n");
    for (int i = 0; i < maiorAva; i++){
        for (int j = 0; j < qtdeCol; j++){
            printf("%d ", tabBrinq[i][j]);
        }
        printf("\n");
    }
}