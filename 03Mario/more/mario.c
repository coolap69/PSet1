#include <stdio.h>
#include <cs50.h>

int main(void)

//validate user input//
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
// Valid heights: [0,23]
    while
    (n < 0 || n > 23);

    for (int i = 0; i < n; i++)
    {
//printf a blank space
        for (int space = 0; space < (n - i - 1); space++)
        {
            printf(" ");
        }

        for (int h = 0; h < (i + 1); h++)
        {
            printf("#");
        }
        printf("  ");

//printf the right side
        for (int r = 0; r < (i + 1); r++)
        {
            printf("#");
        }

        printf("\n");
    }
}

// draw the pyramid
// for each row.
// print left pyramid
//  print spaces
//  print hashes
// print gap


// print right pyramid