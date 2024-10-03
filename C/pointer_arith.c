#include <stdio.h>

//pointer Arithemetics

int main (void){

    char* robot = "Wallie";

    printf("%c", *robot); //This will print out the first character in the string
    printf("%c", *(robot + 1)); //prints second character

}