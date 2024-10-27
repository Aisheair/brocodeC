#include <stdio.h>

double square(double x){
    // double result = x * x;
    // return result;
    return x * x;
}

int main(){
    // returns = returns a value back to a calling function
    double i = square(3.14);
    printf("%lf", i);
    return 0; 
}