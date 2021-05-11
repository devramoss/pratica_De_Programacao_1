#include <stdio.h>
#include <stdlib.h>
//x² -10x + 24 = 0

int main(){
    int x, result;
    
    printf("x² - 10x + 24 = 0\nInforme um número que satisfaça a equação:\n");
    scanf("%d", &x);

    result = (x * x) - (10*x) + 24;

    if(result == 0){
        printf("O número informado satisfaz a equação!");
    }

    else{
        printf("O número informado não satisfaz a equação !");
    }
}