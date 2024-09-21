#include <stdio.h>
#include <stdlib.h>

// Declaring the function
void aboutUser(const char* name, const char* place);

int main() {
    // Defining our variables
    const char* name = "Tife";
    const char* place = "Canada";

    // Calling the user function
    aboutUser(name, place);

    return 0;
}

// Defining the user function
void aboutUser(const char* name, const char* place) {
    printf("Hello my name is %s\n", name);
    printf("I currently reside in %s\n", place);
}