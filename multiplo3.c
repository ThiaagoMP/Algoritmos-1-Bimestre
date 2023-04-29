#include <stdio.h>

int main()
{
    int number;
    printf("Digite um numero: \n");
    scanf("%i", &number);

    if (number % 3 == 0){
        printf("Multiplo de 3");
    }else{
        printf("Nao e multiplo de 3");
    }
    
    return 0;
}