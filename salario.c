#include <stdio.h>

int getReadjustment(float salary);

int main()
{
    float salary;

    printf("Digite o seu antigo salario:\n");
    scanf("%f", &salary);

    float newSalary = salary + (salary * (getReadjustment(salary) / 100.0));

    printf("Seu novo salario e: %f", newSalary);

    return 0;
}

int getReadjustment(float salary)
{
    if (salary <= 400)
    {
        return 15;
    }
    else if (salary > 400 && salary <= 800)
    {
        return 12;
    }
    else if (salary > 800 && salary <= 1200)
    {
        return 10;
    }
    else if (salary > 1200 && salary <= 2000)
    {
        return 7;
    }
    else if (salary > 2000)
    {
        return 4;
    }
    return 0;
}