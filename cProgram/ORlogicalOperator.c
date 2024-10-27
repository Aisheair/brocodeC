#include <stdio.h>
#include <stdbool.h>

int main(){
    // logical operators = || (OR) checks if at least one condition is true

    float temp = -1000;

    if(temp <= 0 || temp >= 30){  
        printf("\nthe weather is bad!!");
    }
    else{
        printf("\nthe weather is good!!");
    }



    return 0;
}