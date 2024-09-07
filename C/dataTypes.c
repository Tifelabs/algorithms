#include <stdio.h>

int main (void){

     int        integerVar = 50;
     float      floatingVar = 33.1;
     double     doubleVar = 8.44e+11;
     char       charVar = 'T';

     _Bool      boolVar = 0;

     printf("integerVar = %i\n", integerVar);
     printf("floatingVar = %f\n", floatingVar);
     printf("doubleVar = %e\n", doubleVar);
     printf("doubleVar = %g\n", doubleVar);
     printf("charVar = %c\n",charVar);
     printf("boolVar = %i\n",boolVar);


    return 0;
}