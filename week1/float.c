#include <cs50.h>
#include <stdio.h>

int main(void) {
    // Decimal numbers are called floating point numbers in computers because
    // depending on the number, the decimal point can "float" between the digits.
    float price = get_float("How much money did you spend on takeaway?: £");

    // To specify the number of digits printed after the decimal, you can use .2, .3, .4 etc.
    printf("Total cost with tax: £%.2f. \n", price * 1.0625);
}
