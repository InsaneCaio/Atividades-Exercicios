#include <stdio.h>
#include <string.h>

typedef struct regData {
    char dia[3], mes[3];
    int ano;
}regData;

int main(){
    regData data1 = {"15", "08", 2009};
    regData data2;

    gets(data2.dia);
    gets(data2.mes);
    scanf("%d", &data2.ano);

    printf("\n%s/%s/%d", data1.dia, data1.mes, data1.ano);
    printf("\n%s/%s/%d", data2.dia, data2.mes, data2.ano);

    if (!strcmp(data1.dia, data2.dia) && !strcmp(data1.mes, data2.mes) && data1.ano == data2.ano)
        printf("\n\nDatas Iguais");
    else
        printf("\n\nDatas Diferentes");
    return 0;
}
