#include <cs50.h>
#include <stdio.h>

int main(void) {
    // Prompt the user for floats.
    float a = get_float("a: ");
    float b = get_float("b: ");

    // Do division
    printf("a / b = %.50f\n", a / b);

    /* 
        The output of 2 numbers here for example would be:
            a: 5
            b: 10
            output: 0.50000000000000000000000000000000000000000000000000
            This is called a "floating-point imprecision". We don't have enough bits to store all possible values so
            the computer has to store the closest value that it can to 5 divided by 10.
    */
}
