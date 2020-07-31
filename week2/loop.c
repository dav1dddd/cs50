#include <cs50.h>
#include <stdio.h>

float avg(int len, int arr[]);

int main(void) {
    // Get scores from user
    int x = get_int("Give scores pls: ");
    int score[x];
    for (int i = 0; i < x; i++) {
        score[x] = get_int("Scores: %i\n", x + 1);
    }
}