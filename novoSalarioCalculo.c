#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioAtual, novoSalario;

    printf("Por favor, digite o seu salário:\nR$ ");
    scanf("%f", &salarioAtual);

    novoSalario = (salarioAtual * 0.153) + salarioAtual;

    printf("O seu novo salário é R$ %f", novoSalario);

}