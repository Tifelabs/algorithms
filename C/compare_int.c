#include <stdio.h>

int main (void){

  int first_digit;
  int second_digit;

  printf("Enter First Digit: ");
  scanf("%d",&first_digit);

  printf("Enter Second Digit: ");
  scanf("%d",&second_digit);

 //adding conditions to the main code

 if (first_digit == second_digit){
    printf("Same");
 }

 else{
    printf("Different");
 }
    
}