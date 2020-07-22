#include <stdio.h>
#include <cs50.h>

int get_positive_integer(void);

int main(void) {
    // "i" is the returned number. The returned number is stored here in this main function.
    int i = get_positive_integer();
    printf("%i\n", i);
}

// Prompt user for an integer that is positive, then the integer will be returned.
int get_positive_integer(void) {
    int number;
    // This construct "do ... while" does something first, then check condition and repeat until it is no longer true.
    do {
        number = get_int("%s", "Positive int: ");
    }
    // When the loop ends, if number is not less than 1, the number will be returned. Otherwise, the number won't be returned and the loop will ask for a positive integer again.
    while (number < 1);
    return number;
}
