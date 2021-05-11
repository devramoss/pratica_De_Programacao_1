#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura, imc;

    printf("Por favor, digite o seu peso em KG:\n");
    scanf("%f", &peso);
    printf("Agora informe a sua altura em metros:\n");
    scanf("%f", &altura);

    imc = peso/(altura*altura);
    
    if(imc<18.5){
        printf("Você está abaixo do peso!\nSeu IMC é de %.2f", imc);
    }

    else if(imc >= 18.5 && imc <= 24.99){
        printf("Seu peso está normal!\nSeu IMC é de %.2f", imc);
    }
    else{
        printf("Você está acima do peso!\nSeu IMC é de %.2f", imc);
    }
}