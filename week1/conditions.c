// Conditions and relational operators

#include <cs50.h>
#include <stdio.h>

int main(void) {
    // Prompt user for both numbers
    int a = get_int("a: ");
    int b = get_int("b: ");

    if (a < b) {
        printf("%i is less than %i\n", a, b);
    } else if (a > b) {
        printf("%i is more than %i\n", a, b);
    } else {
        printf("%i is the same as %i\n", a, b);
    }
}
