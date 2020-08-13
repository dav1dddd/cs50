#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void) {
    int height = get_int("Enter an integer: ");
    draw(height);
}

void draw(int h) {
    // Nested loop
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
}