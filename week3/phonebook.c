#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Define type with structure
// Struct is a container for multiple data types
typedef struct {
    string name;
    string number;
}
person;

int main(void) {
    // 4 elements, each of type person.
    person people[4];

    people[0].name = "David";
    people[0].number = "123-456-7890";

    people[1].name = "Bill";
    people[1].number = "123-456-7891";

    people[2].name = "John";
    people[2].number = "123-456-7892";

    people[3].name = "Jack";
    people[3].number = "123-456-7892";


    for (int i = 0; i < 4; i++) {
        if (strcmp(people[i].name, "David") == 0) {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Number not found\n");
    return 1;

}