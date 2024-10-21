#include <stdio.h>

int main(){
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer 

    // %.l = decimal precision
    // %l = minimum field width
    //%- = left align

    float iteam1 =  5.75;
    float iteam2 =  10.00;
    float iteam3 =  100.99;

    printf("iteam1: $%8.2f\n", iteam1);
    printf("iteam2: $%8.2f\n", iteam2);
    printf("iteam3: $%8.2f\n", iteam3);

    return 0;
}