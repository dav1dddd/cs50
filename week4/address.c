#include <stdio.h>

// "&" get the address
// "*" go to that address

int main(void) {
    int num = 50;
    int *p = &num;
    printf("%i\n", *p);
}
