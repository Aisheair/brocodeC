#include <stdio.h>

int main(){
    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade:  ");
    scanf("%c", &grade);

    switch (grade){
       case 'A':
       printf("prefect!\n");
       break;
       case 'B':
       printf("you did good!\n");
       break;
       case 'C':
       printf("you did ok!\n");
       break;
       case 'D':
       printf("at least not an F!\n");
       break;
       case 'F':
       printf("lol failed!\n");
       break;
       default:
       printf("pls enter valid grades!!");
    }
    return 0;
}