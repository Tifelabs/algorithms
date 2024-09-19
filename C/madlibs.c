#include <stdio.h>
#include <stdlib.h>

int main (){


    //Declaring our Variables
    char game[15];
    char console[5];
    char emotion[15];

    //Getting the user input baout their favourite Video game
    printf("Enter the name of your favourite game:\n  ");
    fgets(game,15,stdin);
    
    //NOTE
    //The most important thing I noticed is that you dont user Apersign on Strings

    //Getting user input on the console the play on
    printf("What console do you play on?:\n ");
    scanf("%s",console);

    //Getting User input on their their emotions when gaming
    printf("Type how you feel when gaming;\n ");
    scanf("%s",emotion);

    //Displaying all user inputs on the console.
    printf("My favourite video game is %s\n", game);
    printf("I play it most times of my %s\n", console);
    printf("Gaming gives me the freedom to %s\n", emotion);

    return 0;
}


