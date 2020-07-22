#include <stdio.h>
#include <unistd.h>

int main(void) {
    // 1 will be doubled with *= 2 and this will keep going forever as there is no condition to check.
    for (int i = 1; ; i *= 2) {
        printf("%i\n", i);
        // This lets the program pause for 1 second each time it loops.
        sleep(1);

        /* 
            This happens, we get a "signed integer overflow" error:
            overflow.c:6:25: runtime error: signed integer overflow: 1073741824 * 2 cannot be represented in type 'int'
            -2147483648
            
            This happens because the C program recognised that the signed integer couldn't store the next value. Therefore we got an error.
            "i" turned into a negative number because it tried to double "1073741824".

            This problem is called "integer overflow". The integer can only be so big before it runs out of bits and "rolls over".
        */
    }
}
