#include <stdio.h>
int main(void) {
    int counter = 0;

    // Add 1 to the counter
    counter = counter + 1;
    int y = 2;

    // You could also have "syntactic sugar" or "shortcuts" like this. This just means a shorter or better way of writing this
    /* 
        Both of these are the same as above ^
        counter++;
        counter+=1;
    */

    // Condition that maps to "if (counter < y) { printf("less"); }"
    if (counter < y) 
    {
        printf("less\n");
    }
    else if (counter > y) {
        printf("more\n");
    } 
    else // else if (x == y) can also be used here (but you don't need to) 
    {
        printf("They are both the same\n");
    }
}
