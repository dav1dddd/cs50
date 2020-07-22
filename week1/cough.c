#include <stdio.h>

// "cough" function is implemented twice because the C compiler reads from top to bottom so
// we have to tell the C compiler that the cough function exists before it is used.
// After the main function, the cough function is implemented.

// "void" is used because the cough function doesn't take any args (inputs).
// void cough(void);

// cough function with args (inputs).
void cough(int x);

int main(void) {
    cough(6);
    // For loop is moved to cough function
    // for (int i = 0; i < 3; i++) {
    //     cough();
    // }
}

void cough(int x) {
    for (int i = 0; i < x; i++) {
        printf("cough\n");
    }
}
