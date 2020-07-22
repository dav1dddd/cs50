// Logical operators
// '||' = or

#include <stdio.h>
#include <cs50.h>

int main(void) {
    char character = get_char("C is a great programming language, do you agree?: ");
    // if character is Y "or" character is y
    if (character == 'Y' || character == 'y') {
        printf("Yes, your opinion is correct.\n");
    // else if character is N "or" character is n    
    } else if (character == 'N' || character == 'n') {
        printf("Ok well that's just your opinion then.\n");
    }
}
