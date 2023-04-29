#include<stdio.h>

int main(){
    float number;
    printf("Digite um numero: \n");
    scanf("%f",&number);

    if(number>50){
        printf("%f",number/2);
    }else{
        printf("%f",number*2);
    }
    return 0;
}