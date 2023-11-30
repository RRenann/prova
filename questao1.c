#include <stdio.h>
#include <string.h>


int calcular(int a,int b){
    
    if(a < b){
        printf("A soma entre eles eh: %d",a + b);
    }
    else if(a == b){
        printf("A multiplicacao entre eles eh: %d",a * b);
    }
    else if(a > b){
        printf("A subtracao entre eles eh: %d",a - b);
    }

}
int main(){
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    calcular(num1,num2);

}