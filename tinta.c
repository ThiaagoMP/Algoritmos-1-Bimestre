#include<math.h>
#include<stdio.h>

float getArea();

int main(){
    const float priceCyna = 50.0;
    const float litryCyna = 5.0;
    const float literArea = 3.0;

    float area = getArea();
    
    float litryNecessary = area / literArea;
    float cynaNecessary = litryNecessary / litryCyna;
    float totalPrice = cynaNecessary * priceCyna;

    printf("Area do cilindro: %.2f\n",area);
    printf("Litros necessarios: %.2f\n",litryNecessary);
    printf("Latas necessarias: %.2f\n",cynaNecessary);
    printf("Preco total: %.2f\n",totalPrice);

    return 0;
}

float getArea(){
    float radius,height;
    
    printf("Digite o raio do cilindro: \n");
    scanf("%f",&radius);
    
    printf("Digite a altura do cilindro: \n");
    scanf("%f",&height);

    float pi = 3.1415;
    float area = (pi*pow(radius,2)) + (2*pi*radius*height);

    return area;
}