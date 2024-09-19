#include <stdio.h>
#include <stdlib.h>

int main (){

    char game[15];
    char console[5];
    char emotion[15];

    printf("Enter the name of your favourite game:\n  ");
    fgets(game,15,stdin);

    printf("What console do you play on?:\n ");
    scanf("%s",console);

    printf("Type how you feel when gaming;\n ");
    scanf("%s",emotion);


    printf("My favourite video game is %s\n", game);
    printf("I play it most times of my %s\n", console);
    printf("Gaming gives me the freedom to %s\n", emotion);


    return 0;
}


