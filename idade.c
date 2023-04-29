#include <stdio.h>

char *getCategory(int age);

int main()
{
    int age;

    printf("Digite a idade do nadador\n");
    scanf("%i", &age);

    printf(getCategory(age));
    return 0;
}

char *getCategory(int age)
{
    if (age < 5)
    {
        return "Jovem demais para nadar!\n";
    }
    else if (age >= 5 && age <= 7)
    {
        return "Infantil A\n";
    }
    else if (age >= 8 && age <= 10)
    {
        return "Infantil B\n";
    }
    else if (age >= 11 && age <= 13)
    {
        return "Juvenil A\n";
    }
    else if (age >= 14 && age <= 17)
    {
        return "Juvenil B\n";
    }
    else if (age >= 18)
    {
        return "Senior\n";
    }
    return "";
}