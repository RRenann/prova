#include <stdio.h>


int calcularFatorial(int numero) {
    int fatorial = 1;

    for (int i = 2; i <= numero; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int numero;


    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    
    int resultado = calcularFatorial(numero);

    
    printf("O fatorial de %d eh: %d\n", numero, resultado);

    return 0;
}
