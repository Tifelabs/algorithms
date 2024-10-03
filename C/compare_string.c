#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char first_name[30];
    char nick_name[30];

    printf("Enter First name:");
    scanf("%s",first_name);

    printf("Enter nickname; ");
    scanf("%s",nick_name);

    if(strcmp(first_name,nick_name) == 0){
        printf("Same");
    }
    else{
        printf("Different");
    }


}