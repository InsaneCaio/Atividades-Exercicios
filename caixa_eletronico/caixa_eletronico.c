#include <stdio.h>

    /*
        Este código te dirá a quantidade miníma de notas e/ou moedas
        para o valor de saque solicitado.
    */

int main(){

    // multiplicar todo por 100 para ser inteiro;
    int notas[6] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[6] = {100, 50, 25, 10, 5, 1};

    float valSaque;
    int valor, resultado;

    // loop infinito até ser digitado 0
    while (1){
        printf("DIGITE O VALOR DO SAQUE (0 para sair): ");
        scanf("%f", &valSaque);
        if(valSaque == 0){
            break;
        }

        // transformar a variavel float em int;
        valor = (int)(valSaque * 100 + 0.5);

        printf("NOTAS:\n");
        for (int i = 0; i < 6; i++){
            resultado = valor / notas[i];                //voltar int para float:
            printf("%d nota(s) de R$ %.2f\n", resultado, notas[i] / 100.0);
            // abreviação de (valor = valor % notas[i])
            valor %= notas[i];
        }

        printf("MOEDAS:\n");
        for (int i = 0; i < 6; i++){
            resultado = valor / moedas[i];
            printf("%d moeda(s) de R$ %.2f\n", resultado, moedas[i] / 100.0);
            valor %= moedas[i];
        }
    }
    return 0;
}