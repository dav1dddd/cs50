#include <stdio.h>
#include <cs50.h>

int main(void) {
    // Check if number is odd or even
    int i = get_int("number: ");
    // Get remainder of i after is it divided by 2. If the remainder is 0 the number is even, otherwise it is an odd number.
    if (i % 2 == 0) {
        printf("even number\n");
    } else {
        printf("odd number\n");
    }
}
