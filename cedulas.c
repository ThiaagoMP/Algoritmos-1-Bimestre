#include <stdio.h>

int main()
{
    int number;

    printf("Digite um numero: \n");
    scanf("%i", &number);

    int numberHundred = number / 100;
    int restHundred = number % 100;

    int numberFifty = restHundred / 50;
    int restFifty = restHundred % 50;

    int numberTwenty = restFifty / 20;
    int restTwenty = restFifty % 20;

    int numberTen = restTwenty / 10;
    int restTen = restTwenty % 10;

    int numberFive = restTen / 5;
    int restFive = restTen % 5;

    int numberTwo = restFive / 2;
    int restTwo = restFive % 2;

    int numberOne = restTwo / 1;

    printf("%i nota(s) de R$ 100,00\n", numberHundred);
    printf("%i nota(s) de R$ 50,00\n", numberFifty);
    printf("%i nota(s) de R$ 20,00\n", numberTwenty);
    printf("%i nota(s) de R$ 10,00\n", numberTen);
    printf("%i nota(s) de R$ 5,00\n", numberFive);
    printf("%i nota(s) de R$ 2,00\n", numberTwo);
    printf("%i nota(s) de R$ 1,00\n", numberOne);

    return 0;
}