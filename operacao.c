#include <stdio.h>
#include <stdlib.h>

int main(){
    char operacao;
    float num1, num2;

    printf("Escolha sua operação: +, -, * ou /\n");
    scanf("%c", &operacao);
    
    printf("Entre com o 1º número: ");
    scanf("%f", &num1);

    printf("Entre com o 2º número: ");
    scanf("%f", &num2);

    switch(operacao){
            case '+':
            printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;

            case '-':
            printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;

            case '*':
            printf("%.2f * %.2f = %.2f", num1, num2, num1 - num2);
            break;

            case'/':
            printf("%.2f / %.2f = %.2f",num1, num2, num1 / num2);
            break;

            default:
            printf("Operação inválida!");
    }

}