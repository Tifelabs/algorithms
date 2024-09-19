#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[30];
    int age;


    printf("Enter your firstname:\n ");
    scanf("%s",&name);                      //Scanf allows users to input something into the program


    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s You are %d years old",name,age);

    return 0;
}