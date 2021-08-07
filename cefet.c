
//Fazer um programa para preencher um vetor com o nome de todos os 10 professores do CEFET e outro vetor com os
//nomes de todos os 5 Coordenadores de curso do CEFET. Após preencher os dados dos vetores 
//1. verifique se há algum professor no CEEFT chamado Theodoro; 
//2. Conte quantos professoras se chamam Maria; 
//3. copie o nome do primeiro Professor para a segunda posição do vetor de Coordenadores. 
//Imprima na tela os nomes de todos os professores e de todos os Coordenadores. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char courseCoordinators [5][40];
    char teacherName[10][40];
    int  quantityMaria = 0;

    for(int i = 0; i<10; i++){
        system("cls");

        printf("> > > > > >  C A D A S T R O DE P R O F E S S O R E S < < < < < < \n");
        printf("\nNome: ");
        fflush(stdin);
        gets(teacherName[i]);

        if(strcmp(teacherName[i], "Maria") == 0){
            quantityMaria ++;
        } 
    }
    int coordinators = 0;
    system("cls");

    do{
        fflush(stdin);
        printf("> > > > > >  C A D A S T R O DE C O R D E N A D O R E S < < < < < < \n");
        printf("Nome: ");
        gets(courseCoordinators[coordinators]);
        coordinators++;
    }while(coordinators<5);

    system("cls");
    printf("%d dos nossos professores se chama Maria\n\n", quantityMaria);

    for(int j = 0; j<10; j++){
        if(strcmp(teacherName[j], "Theodoro") == 0){
                printf("Um dos professores do CEFET se chama Theodoro\n");
        }
    }
    printf("\n\nP R O F E S S O R E S\n");

    for(int i = 0; i<10; i++){
        printf("\n--> %s\n", teacherName[i]);
    }

    printf("\n\nC O O R D E N A D O R E S\n");

    for(int c = 0; c<5; c++){
        printf("\n--> %s\n", courseCoordinators[c]);
    }
    strcpy(courseCoordinators[1], teacherName[0]);

    printf("\n\nome do primeiro Professor copiado para a segunda posição do vetor de Coordenadores : \n");
        for(int c = 0; c<5; c++){
             printf("\n--> %s\n", courseCoordinators[c]);
        }
}