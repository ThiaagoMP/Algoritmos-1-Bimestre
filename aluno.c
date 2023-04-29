#include<stdio.h>

int main(){
    float note;
    int percentFrequency;

    printf("Digite a nota do aluno\n");
    scanf("%f",&note);

    printf("Digite a frequencia do aluno\n");
    scanf("%i",&percentFrequency);

    if(note >= 7.0 && percentFrequency >= 75){
        printf("Aluno aprovado!\n");
    }else{
        printf("Aluno reprovado!\n");
    }

    return 0;
}