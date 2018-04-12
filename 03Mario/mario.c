#include <stdio.h>
#include <cs50.h>

int main(void) // Jackie - works good.

//validate user input//
{
    int n; // Jackie -  instead of n, give it a representation, like int height
    do
    {
        n = get_int("Height: ");
    }
// Valid heights: [0,23]
    while
    (n < 0 || n > 23);

    for (int i = 0; i < n; i++) // Jackie -  give i a representation
    {
//printf a blank space
        for (int s = 0; s < (n - i); s++) // Jackie - int s can be int space
        {
            printf(" ");
        }

        for (int h = 0; h < (i + 2); h++) // Jackie - int h can be int hash, it helps when reading the code
        {
            printf("#");
        }
        printf("\n");
    }
}



//       if (i + s < (n - 1))
//       printf(" ");
//     }
//     printf("\n");

//   for( int h = 0; h < (n); h++)
// }


// printf("#\n")


// int n = get_int("Height: ");

// for (int i = 0; i < n; i++)


// printf("#\n");
// }

// while (conditions)
// {
//something happens
// }

// do-while loops
// execute the body at least once

// int n;
// do
// {
//     n =get_int();
// }
// while(condition);

//prompt and validate user input
//draw the half pyramid



// get_int
// SC50 Library function
// ensure that the user inputs an integer
// positive integers
// negative integers
// 0
// otherwise, user is prompted to "Retry:"