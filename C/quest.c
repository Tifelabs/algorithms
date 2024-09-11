#include <stdio.h>
#include <cs50.h>

int main (void) {


    // string name = get_string("What is your name? ");
    // int age = get_int("How old are you? ");


    // printf("Hello, %s!\n", name);
    // printf("Damn !, I never knew you were %i years old", age);


    // return 0;


     string buy = get_string("Hello what do you wanna buy?  ");
     int cash = get_int("Enter amount $ ");
     int req = 50;

    if(cash < req){
        printf("Hey dude, thats quite small");
    }

    else
    {
        int remain = cash - req;
        printf("You have $ %i left", remain);
    }

    return 0;
}