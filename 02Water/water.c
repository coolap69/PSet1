#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //initial declaring of variables
    int minutes;
    int bottles = 0;

    // prompt user for minutes and verify it is valid number
    do
    {
        minutes = get_int("Minutes: ");
    }
    while (minutes < 0);

    //for loop adding number of bottles based on minutes entered
    for (int i = 0; i < minutes; i++)
    {
        bottles = bottles + 12;
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