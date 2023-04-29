#include<stdio.h>

int main(){
    int numberMaria, numberJoao;

    printf("Maria voce pode jogar um numero\n");
    scanf("%i",&numberMaria);

    printf("Joao voce pode jogar um numero\n");
    scanf("%i",&numberJoao);
    
    int sum = numberMaria + numberJoao;

    if(sum%2 == 0){
        printf("Par\n");
    }else{
        printf("Impar\n");
    }

    return 0;
}