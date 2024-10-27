#include <stdio.h>
#include <stdbool.h>

int main(){
    // logical operators = ! (NOT) reverses the state of a condition

    bool sunny = true;

    if(!sunny){
        printf("\nnot sunny!!!!");
    }
    else{
        printf("\nwow sunny!!!!");
    }

    return 0;
}