#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[]);

int main(){
    char name[10];
    sayHi("Tife");

    return 0;
}

void sayHi(char name[]){
    printf("Hello %s how are doing?",name);
}

