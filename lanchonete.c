#include <stdio.h>

int main()
{
    int id, quantity;

    printf("Digite o id do produto\n");
    scanf("%i", &id);

    printf("Digite a quantidade\n");
    scanf("%i", &quantity);

    if (id == 100)
    {
        printf("Item Cachorro Quente, Preco total: %f\n", 7.50 * quantity);
    }
    else if (id == 101)
    {
        printf("Item Bauru Simples, Preco total: %f\n", 5.50 * quantity);
    }
    else if (id == 103)
    {
        printf("Item X-Burger, Preco total: %f\n", 10.50 * quantity);
    }
    else if (id == 104)
    {
        printf("Item X-Salada, Preco total: %f\n", 11.0 * quantity);
    }
    else if (id == 105)
    {
        printf("Item X-Bacon, Preco total: %f\n", 13.50 * quantity);
    }
    else if (id == 106)
    {
        printf("Item Refrigerante, Preco total: %f\n", 3.50 * quantity);
    }
    else
    {
        printf("Produto nao encontrado\n");
    }

    return 0;
}