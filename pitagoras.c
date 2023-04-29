#include<stdio.h>
#include<math.h>

int main(){
    float collaredPeccary1,collaredPeccary2;

    printf("Digite o primeiro cateto\n");
    scanf("%f",&collaredPeccary1);
    printf("Digite o segundo cateto\n");
    scanf("%f",&collaredPeccary2);

    float hypotenuse = sqrt(pow(collaredPeccary1,2) + pow(collaredPeccary2,2));

    printf("Hipotenusa: %f",hypotenuse);
    return 0;
}