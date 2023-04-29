#include <stdio.h>

char *executeMammal();
char *executeBird();
char *executeReptile();

int main()
{

    int mammal;
    printf("Mamifero? \n");
    scanf("%i", &mammal);

    if (mammal == 1)
    {
        printf(executeMammal());
        return 0;
    }

    int bird;
    printf("Ave? \n");
    scanf("%i", &bird);

    if (bird == 1)
    {
        printf(executeBird());
        return 0;
    }

    int reptiles;
    printf("Reptil? \n");
    scanf("%i", &reptiles);

    if (reptiles == 1)
    {
        printf(executeReptile());
        return 0;
    }

    printf("Entradas invalidas!\n");

    return 0;
}

char *executeReptile()
{
    int hoofed;
    printf("Com casco? \n");
    scanf("%i", &hoofed);

    if (hoofed)
        return "Tartaruga";

    int carnivores;
    printf("Carnivoros? \n");
    scanf("%i", &carnivores);

    if (carnivores)
        return "Crocodilo";

    int withoutPaws;
    printf("Sem patas? \n");
    scanf("%i", &withoutPaws);

    if (withoutPaws)
        return "Cobra";

    return "Entradas invalidas!\n";
}

char *executeBird()
{
    int notFlier;
    printf("Nao voador? \n");
    scanf("%i", &notFlier);

    if (notFlier == 1)
    {
        int tropical;
        printf("Tropical? \n");
        scanf("%i", &tropical);

        if (tropical == 1)
            return "Avestruz";

        int polar;
        printf("Polar? \n");
        scanf("%i", &polar);

        if (polar == 1)
            return "Pinguim";

        return "Entradas invalidas!\n";
    }

    int swimmer;
    printf("Nadador? \n");
    scanf("%i", &swimmer);

    if (swimmer == 1)
        return "Pato";

    int ofPrey;
    printf("De rapina? \n");
    scanf("%i", &ofPrey);

    if (ofPrey == 1)
        return "Aguia";

    return "Entradas invalidas!\n";
}

char *executeMammal()
{
    int quadruped;
    printf("Quadrupede? \n");
    scanf("%i", &quadruped);

    if (quadruped == 1)
    {
        int carnivore;
        printf("Carnivoro? \n");
        scanf("%i", &carnivore);

        if (carnivore == 1)
            return "Leao";

        int herbivore;
        printf("Herbivoro? \n");
        scanf("%i", &herbivore);

        if (herbivore == 1)
            return "Cavalo";

        return "Entradas invalidas!\n";
    }

    int bipeds;
    printf("Bipede? \n");
    scanf("%i", &bipeds);

    if (bipeds == 1)
    {
        int omnivorous;
        printf("Onivoro? \n");
        scanf("%i", &omnivorous);

        if (omnivorous == 1)
            return "Homem";

        int fruitful;
        printf("Frutifero? \n");
        scanf("%i", &fruitful);

        if (fruitful == 1)
            return "MASQUEICO";

        return "Entradas invalidas!\n";
    }

    int flyers;
    printf("Voador? \n");
    scanf("%i", &flyers);

    if (flyers == 1)
        return "Morcego";

    int aquatics;
    printf("Aquatico? \n");
    scanf("%i", &aquatics);

    if (aquatics == 1)
        return "Baleia";

    return "Entradas invalidas!\n";
}
