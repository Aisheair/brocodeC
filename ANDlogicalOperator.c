#include <stdio.h>
#include <stdbool.h>

int main(){
    // logical operators = && (AND) checks if two conditions are true

    float temp = 24;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){  
        printf("\nthe weather is good!!");
    }
    else{
        printf("\nthe weather is bad!!");
    }

    return 0;
}