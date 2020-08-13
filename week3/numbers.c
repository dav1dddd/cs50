#include <stdio.h>
#include <cs50.h>

int main(void) {
    // Statically initialized array
    int nums[6] = {4, 8, 15, 16, 23, 42};

    // Linear search algorithm
    for (int i = 0; i < 6; i++) {
        if (nums[i] == 50) {
            printf("Found 50\n");
        }
    }
    // If 50 wasn't found, have this outside of the loop
    printf("50 not found\n");
}