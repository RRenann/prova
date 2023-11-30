#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        
        if (str[i] != str[j]) {
            return false; 
        }
    }

    return true; 
}   

int main() {

    char palavra[100];
    printf("Digite a palavra: ");
    scanf("%c",&palavra);

    if (isPalindrome(palavra)) {
        printf("e um palindromo.\n");
    } else {
        printf("nao e um palindromo.\n");
    }

    return 0;
}
