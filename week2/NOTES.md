# Compiling source code
Compiling source code into machine code goes through these 4 steps:
- Preprocessing - The header files # will be replaced in the program. Example
```c
#include <cs50.h>
#include <stdio.h>

int main(void) {
  string name = get_string("Name: ")
  printf("hello, %s\n", name)
}
```
will get turned into
```c
string get_string(string prompt)
int printf(const char *format)

int main(void) {
  string get_string(string prompt)
  printf("hello, %s\n", name)
}
```

- Compiling - Compiling converts our source code `C` to assembly code. 
Assembly is a low level language, and the CPU can process and directly understand assembly binary instructions.

- Assembling - This step takes the assembly code and then translates it into binary instructions by **assembling** it. 
The instructions in binary are called machine code, which the computers CPU can understand directly.

- Linking - Linking is the combination of multiple libraries that we want to link. They are combined with the binary of our program. 
For example, our example `C` program which would either be compiled as `a.out` or `hello.c` (depending on whether you specify a name) would
be the **combined** version of the compiled libraries `cs50.c`, `hello.c`, `printf.c` (I hope you understand this, I am really bad at wording stuff)
