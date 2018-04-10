#include<cs50.h>
#include<stdio.h>
#include <math.h>

int main(void)


//prompt user for an amount of change
//the amount must make sense
//what values are accepted?
//get_float


{
    float dollars;
    int coins = 0;

    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

//dollar ($) to cents (¢)
//input is a value in dollars
//convert: 1$ = 100¢
//floating-point imprecision
//round

    int cents = round(dollars * 100);

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

//always use the largest coin possible
//keep track of coins used
//how many coins to be returned
//amount to be returned


//   pseudocode
//   get amount in dollars
//   while(quarters can be used)
//   increase count
//   decrease amount by a quarter
//   while(dimes can be used)
//   increase count
//   decrease amount by a dime
//   (etc..)
//   print number of coins used