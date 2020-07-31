#include <cs50.h>
#include <stdio.h>

int main(void) {
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;
    
    // Print the average
    printf("Average: %i\n", (score1 + score2 + score3) / 3);
    
    // The variables can't easily be included later.
    // Variables can be stored in memory one after the other and back to back.
    // In C, a list of vars stored one after another in a contiguous chunk of
    // memory is called an array.
    
    // Here we make an array with the 3 numbers.
    int scores[3];
    scores[0] = 72; 
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / 3);
    
}