/*
You are given two integer x and y. Now you have to find the average of thid two integer. Impliment this by
using pointer.
*/


#include<stdio.h>

int main()
{
    int a,b;
    int* x=&a;
    int* y=&b;
    scanf("%d %d",&*x, &*y);
 
    float average=(float)(*x + *y )/2;
    printf("%.3f", average);
    return 0;
}