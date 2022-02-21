#include <cs50.h>
#include <stdio.h>



int main(void)
{
    int height;

    // prompt the user for a height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // to create rows
    for (int i = 0; i < height; i++)
    {
        // left side space/dots
        for (int j = 1; j < height - i; j++) // j < height-i-1 --> 8 to 1 && height+i-height --> 1 to 8
        {
            printf(" ");
        }
        // left side hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // to create the gap in the middle
        printf("  ");
        // the right side hashes
        for (int d = -1; d < height + i - height; d++)
        {
            printf("#");
        }
        printf("\n");
    }
}
