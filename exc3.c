#include <stdio.h>
#include <string.h>

void bubble(char v[4][20]);
void pesquisa(char v[4][20]);

int main(){
    char vetor[4][20] = {"mustard", "mangos", "sybau", "seven"};
    for (int i = 0; i < 4; i++)
        printf("%s ", vetor[i]);
    printf("\n");
    bubble(vetor);
    for (int i = 0; i < 4; i++)
        printf("%s ", vetor[i]);
    return 0;
}

void bubble(char v[4][20]){
    char aux[20];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4-i; j++){
            if (strcmp(v[j], v[j+1]) > 0){
                strcpy(aux, v[j]);
                strcpy(v[j], v[j+1]);
                strcpy(v[j+1], aux);
            }
        }
    }
    return v;
}

void pesquisa(char v[4][20], char escolha[20]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4-i; j++){
            if (v[j], ) > 0){

            }
        }
    }
}
