#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palavra[26];
    int qtdeLetras[26];

    for (int i = 0; i < 26; i++)
        qtdeLetras[i] = 0;
    printf("Digite a palavra (ate 25 letras): \n");
    fgets(palavra, 26, stdin);

    for (int i = 0; i < strlen(palavra); i++){
        for (int j = 0; j < 26; j++){
            palavra[i] = toupper(palavra[i]);
            if (palavra[i] == (char)65+j)
                qtdeLetras[j]++;
        }
    }
    printf("\nQuantidade de cada letra contida na palavra:\n");
    for (int i = 0; i < 26; i++){
        printf("%c ", (char)65+i);
    }
    printf("\n\n");
    for (int i = 0; i < 26; i++){
        printf("%d ", qtdeLetras[i]);
    }
}