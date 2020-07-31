#ifndef HEADER_H_ /* This is called an include guard. */
#define HEADER_H_

int h(int x); /* An int is 4 bytes! */

#endif // HEADER_H_

/*
    This conditional statement will stop the compiler from processing its contents twice.
    If the header is included twice, the preprocessor will skip over the content of the file, so there will be no error.
*/
