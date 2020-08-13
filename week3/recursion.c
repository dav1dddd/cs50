// A recursive function is a function that calls itself.

#include <stdio.h>
#include <cs50.h>

// Initialize function
void draw(int h);

int main(void) {
    int height = get_int("Enter an integer: ");
    draw(height);
}

void draw(int h) {
    // Base case (error handler)
    // If height gets to 0, do not keep taking away 1.
    if (h == 0) {
        return;
    }

    // This will call itself "h" amount of times. This is called recursion.
    draw(h-1);

    // Draw additional row (add 1)
    for (int i = 0; i < h; i++) {
        printf("#");
    }
    printf("\n");
}