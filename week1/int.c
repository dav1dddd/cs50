#include <stdio.h>
#include <cs50.h>

int main(void) {
    // %i is used for integers.
    int age = get_int("What is your age?\n");
    printf("You are %i days old\n", age * 365);
}
