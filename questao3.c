#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int tamanhoString(const char *str1, const char *str2) {
    int tamanhoStr1 = strlen(str1);
    int tamanhoStr2 = strlen(str2);

    int tamanhoMedio = (tamanhoStr1 + tamanhoStr2) / 2;
    return tamanhoMedio;
}

int main() {
    char string1[100]; 
    char string2[100];

   
    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    int media = tamanhoString(string1, string2);

    printf("O tamanho medio entre as strings eh: %d\n", media);

    return 0;
}
