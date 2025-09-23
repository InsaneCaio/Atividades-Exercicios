#include <stdio.h>
#include <string.h>
#include <ctype.h>


typedef struct {
    int num;
    char descr[25];
    float valor;
    int qtdes[12];
}TProd;

int main(){
    TProd vProd;

    vProd.num = 1453;
    vProd.descr[25] = strcpy(vProd.descr, "Pino de aco 8mm");
    vProd.valor = 5.32;
    vProd.qtdes[12] = (120, 89, 72, 15, 32, 33, 44, 566, 281, 32, 10, 29);
///////////////////////////////////////////////////////////
    printf("\n%d", vProd.num);
    printf("\n%s", vProd.descr);
    printf("\n%.2f\n", vProd.valor);
    for (int i = 0; i < 12; i++)
        printf("%d ", vProd.qtdes[i]);
///////////////////////////////////////////////////////////
    int i = 0;
    while (vProd.descr[i] != '\0'){
        vProd.descr[i] = toupper(vProd.descr[i]);
        i++;
    }
    i = 0;
    printf("\n\n");
    while (vProd.descr[i] != '\0'){
        printf("%c", vProd.descr[i]);
        i++;
    }
//////////////////////////////////////////////////
    int maior, menor, soma = 0;
    maior = menor = vProd.qtdes[0];
    for (int i = 0; i < 12; i++){
        soma += vProd.qtdes[i];
        if (vProd.qtdes[i] > maior)
            maior = vProd.qtdes[i];
        else if (vProd.qtdes[i] < menor)
            menor = vProd.qtdes[i];
    }
    printf("\n\n maior = %d, menor = %d, soma = %d", maior, menor, soma);

}

void itemB(TProd vProd){
    scanf("%d", &vProd.num);
    gets(vProd.descr);
    scanf("%f", &vProd.valor);
    for (int i = 0; i < 12; i++)
        scanf("%d", vProd.qtdes[i]);
    printf("%d\t%s\t%f\t", vProd.num, vProd.descr, vProd.valor);
    for (int i = 0; i < 12; i++)
        printf("%d ", vProd.qtdes[i]);
}

void itemC(TProd vProd){
    for (int i = 0; i < 12; i++)
        vProd.qtdes[i] = 0;
}

void itemD(TProd vProd){
    int i = 0;
    while (vProd.descr[i] != '\0'){
        vProd.descr[i] = toupper(vProd.descr[i]);
        i++;
    }
    i = 0;
    printf("\n\n");
    while (vProd.descr[i] != '\0'){
        printf("%c", vProd.descr[i]);
        i++;
    }
}

void itemE(TProd vProd){
    int maior, menor, soma = 0;
    maior = menor = vProd.qtdes[0];
    for (int i = 0; i < 12; i++){
        soma += vProd.qtdes[i];
        if (vProd.qtdes[i] > maior)
            maior = vProd.qtdes[i];
        else if (vProd.qtdes[i] < menor)
            menor = vProd.qtdes[i];
    }
    printf("\n\nmaior = %d, menor = %d, soma = %d", maior, menor, soma);
}

void itemF(TProd vProd){
    vProd.num = 0;
    strcpy(vProd.descr, "");
    vProd.valor = 0;
    for (int i = 0; i < 12; i++)
        vProd.qtdes[i] = 0;
}
