#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age:  ");
    scanf("%d", &age);

    if(age >= 100){
        printf("Damn!! u old as hell!!");
    }
    else if(age >= 18){
        printf("You are now signed up!!!");

    }
    else if(age == 0){
        printf("you can'f signed up as u were just born!!");
    }
    else if(age < 0){
        printf("you haven't been born yet!!");

    }
    else{
        printf("you are too young to signed up!!");
    }


    return 0;
}