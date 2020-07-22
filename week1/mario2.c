// Ask user for a number of question marks.

#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n;
    do {
        n = get_int("Width: ");
    }
    while (n < 1);
    for (int i = 0; i < n; i++) {
        printf("?\n");
    }
    printf("\n");
}
