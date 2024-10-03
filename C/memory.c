#include <stdio.h>
#include <stdlib.h>

//The key word typedef char * string;  allows for personal alias i.e.
//Using string as an alias for {char}

int main(void){

    char* name ="Memory";

    printf("%p\n", name); // this will get the memory addess of the Entire string

    printf("%p", &name[0]); //I'm using {%p} to print the pointer(Memory address)

}