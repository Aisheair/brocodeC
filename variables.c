#include <stdio.h>

int main(){
    // variable - allocated space in memory to store a value.
    //              We refer to a variable's name to access the stored value
    //              That variable now behaves as if it was the value it contains 
    //              BUT we need to declare what type of data we are storing

    int x; //declaration
    x = 123; //initialization
    int y  = 321; //declaration + initialization

    int age = 21; //integer
    float gpa = 2.05; //floating point number
    char grade = 'c'; //single character
    char name[] = "bro"; //array of characters

    printf("Hello %s\n", name);
    printf("YOU are %d years old\n",age);
    printf("your avg grade is %c\n",grade);
    printf("your gpa is %f",gpa);
    return 0;
}