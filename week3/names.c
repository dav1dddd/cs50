#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string names[4] = { "John", "Bill", "Jack", "James" };

    for (int i = 0; i < 4; i++) {
        // Returns 0 if two strings are the same: string compare
        if (strcmp(names[i], "John") == 0) {
            printf("Found John\n");

            // return 0 means successful outcome
            return 0;
        }
    }
    printf("John not found\n");

    // return 1 means unsuccessful outcome
    return 1;
}