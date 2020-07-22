// print n-by-n grid of blocks with a loop (two dimensional set of blocks)
#include <stdio.h>
#include <cs50.h>

int main(void) {
    int number;
    do {
        number = get_int("Size: ");
    }
    while (number < 1);
    // These are nested loops
    // The outer loop uses i to do everything n ("number") amount of times
    // The inner loop is the same, except it uses j to do everything
    
    /* 
        To make this simple to understand:
            The outer loop "i" prints the number of "rows" or "lines"
            The inner loop "j" prints the number of "columns" or "#" characters in each line
            These loops make a 2 dimensional block.
    */
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            printf("#");
        }
        printf("\n");
    }
}
