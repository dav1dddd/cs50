#include <stdio.h>

int main(void) {
    for (int i=0; i <=10; i++) {
        // There are 11 #, but I only wanted to print 10. Now I will write an expression to see what has gone wrong with this logical error.
        printf("number: %i", i);
        printf("#\n");
    }

    // Instead of <=10 which means less than or equal to 10, I should have <10 so that it stops when it gets to 10
    // This will give 10 # instead of 11

    for (int i=0; i < 10; i++) {
        printf("number: %i", i);
        printf("#\n");
    }
}