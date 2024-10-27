#include <stdio.h>

int main(){

    const  double PI =3.14159;
    double  radius;
    double circumference;
    double  area;

    printf("\nEnter radius  of a circle:  ");
    scanf("%lf", &radius);

    circumference  = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\nthe circumference of the circle is %.2lf",circumference);
    printf("\nthe area of the circle is %.2lf",area);

    return 0;
}