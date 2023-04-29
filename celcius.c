#include<io.h>
#include<stdio.h>

main(){
    float celcius;
    printf("Digite a temperatura em graus celcius\n");
    scanf("%f",&celcius);

    float fahrenheit = (1.8*celcius) + 32;

    printf("Graus em Fahrenheit: %f\n",fahrenheit);
}