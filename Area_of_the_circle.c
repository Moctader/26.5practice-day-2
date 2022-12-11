/*
You are given a R, theradious of the circle. Now your task is find that area of the circles.
Implent this using function.
*/

#include<stdio.h>

double area_of_the_circle(double x)
{
    double area=3.1416*x*x;
    return area;
}

int main()
{
    double R;
    scanf("%lf", &R);
    double area= area_of_the_circle(R);
    printf("%lf", area);

    return 0;
}