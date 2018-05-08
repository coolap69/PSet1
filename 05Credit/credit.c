#include<cs50.h>
#include<stdio.h>
#include <math.h>

int main(void)

{
    long long credit;
    int coins = 0;

    do
    {
        credit = get_long_long("Credit Card: ");
    }
    while (credit < 0);

    int cents = round(credit * 100);

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    //print the final number of coins
    printf("%i\n", coins);
}


