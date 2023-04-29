#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Digite A: ");
    scanf("%f", &a);
    printf("Digite B: ");
    scanf("%f", &b);
    printf("Digite C: ");
    scanf("%f", &c);

    float delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        printf("Essa equação não possui raízes reais\n");
        return 0;
    }

    float xOne = (-b + sqrt(delta)) / (2 * a);
    float xTwo = (-b - sqrt(delta)) / (2 * a);

    printf("Delta: %f\n", delta);
    printf("X1: %f\n", xOne);

    if (delta != 0)
    {
        printf("X2: %f\n", xTwo);
    }

    return 0;
}