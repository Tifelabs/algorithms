#include <stdio.h>
#include <stdlib.h>

int main (){


    int operation;
    int first;
    int second;
    int answer;

    printf("--WELCOME TO MATH CALCULATOR--");


    //Now users needs to select Operration

    printf("Select Operation:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n", operation);
    scanf("%d",&operation);

    printf("Enter First Digit;\n  ");
    scanf("%d",&first);

    printf("Enter Second Digit;\n ");
    scanf("%d",&second);


//Conditions to run the code
    if (operation == 1){
        answer = first + second;
        printf("Your answer is %d\n", answer);
    }

    else if (operation == 2){
        answer = first - second;
        printf("Your answer is %d\n",answer);
    }

    else if (operation == 3){
        answer = first * second;
        printf("Your answer is %d\n",answer);
    }

     else if (operation == 4){
        answer = first / second;
        printf("Your answer is %d\n",answer);
    }

    else{
        printf("Number out of range!!!");
    }

    return 0;
}