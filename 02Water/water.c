#include <cs50.h>
#include <stdio.h>

int main(void) // Jackie - can shorten the code. Works good.
{
    //initial declaring of variables
    int minutes;
    int bottles = 0; // Jackie - 3. value 12 instead of 0

    // prompt user for minutes and verify it is valid number
    do
    {
        minutes = get_int("Minutes: ");
    }
    while (minutes < 0);

    //for loop adding number of bottles based on minutes entered
    for (int i = 0; i < minutes; i++) // Jackie - 2. which eliminate the for loop
    {
        bottles = bottles + 12;
// Jackie - 1. you could move this line of code into the do{ }, change + to *, and = bottles* to = minutes*

    }
    //print number of bottles
    printf("Bottles: %i \n", bottles);

}
//task
//converting minutes to bottles of water

//step 1
////prompt (how many minutes they shower?)

//step 2
//validte user input (answer)


//step 3
//calculate equivalent bottles
//12 bottles = 1 minute
//printf = answer

//print equivalent bottles