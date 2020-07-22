#include <stdio.h>

int main(void) {
    int x = 0;
    while (x < 100) {
        // This will print "beans" 100 times in the while loop. x gets added to until it reaches 100.
        // Then the loop stops because x would not be less than 100 anymore.
        printf("beans\n");
        x++;
    }

    // A for loop can also be used. In this instance, this for loop is doing the same thing as the while loop.
    // They are both different though.
    // A while loop is probably better to use, since it is shorter than this.

    // for (expression, condition, increment)
    for (int i = 0; i < 100; i++) {
        printf("beans\n");
    }
}
