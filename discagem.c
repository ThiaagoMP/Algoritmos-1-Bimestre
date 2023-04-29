#include <stdio.h>

char* getCity(int dd);

int main()
{
    int ddd;

    printf("Digite o dd da cidade\n");
    scanf("%i", &ddd);

    printf(getCity(ddd));

    return 0;
}

char* getCity(int ddd){
    switch (ddd)
    {
    case 61:
        return "Brasilia";
        break;
    case 71:
        return "Salvador";
        break;
    case 11:
        return "Sao Paulo";
        break;
    case 21:
        return "Rio de Janeiro";
        break;
    case 32:
        return "Juiz de Fora";
        break;
    case 19:
        return "Campinas";
        break;
    case 27:
        return "Vitoria";
        break;
    case 31:
        return "Belo Horizonte";
        break;                        
    default:
        return "DDD nao cadastrado";
        break;
    }
}

