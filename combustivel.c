#include<stdio.h>

int main(){
    int km;
    float spentFuel;

    printf("Digite a distancia total (Em KM): \n");
    scanf("%i",&km);
    
    printf("Digite o combustivel gasto (Em litros): \n");
    scanf("%f",&spentFuel);

    printf("Consumo medio: %2.f km/l", km / spentFuel);

}