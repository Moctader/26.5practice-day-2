/*
You have given a positive integer N, the size of an array as input. Take an array of size N as input. Now 
your task to print this array. Immplent this by using pointer.
*/

#include<stdio.h>

void print_array(int* ara, int x)
{
    int i;
    for(i=0; i<x; i++)
    {
        printf("%d  ", *(ara++));
    }
}

int main()
{
    int N, i;
    scanf("%d", &N);

    //Input array element
    int ara[10];
    int* ptr;
    ptr=ara;

    for(i=0; i<N; i++)
    {
        scanf("%d",ptr++);
    }

    //reset pointer to point from max ara[4] to ara[0]
    ptr=ara;

    // for(i=0; i<N; i++)
    // {
    //     printf("%d\t",*(ptr++));
    // }

    print_array(ptr, N);

    return 0;
}