/*
You have given a positive integer N, the size of an array as input. Take an array size N an input 
You have to find the sum of those elements in array which last digit is zero.
Implementing this by using function.
*/
/*
You have given a positive integer N, the size of an array as input. Take an array size N an input
You have to find the sum of those elements in array which last digit is zero.
Implementing this by using function.
*/
#include<stdio.h>

void is_last_digit_sum(int ara[], int x)
{
    int i, sum=0;
    for(i=0; i<x; i++)
    {
        if (ara[i]%10==0)
        {
            sum+=ara[i];
            
        }
        
    }
    printf("%d", sum);
}

int main()
{
    int N, i;
    scanf("%d", &N);
    int ara[10];

    for(i=0; i<N; i++)
    {
        scanf("%d", &ara[i]);
    }
    is_last_digit_sum(ara, N);
     
    return 0;
}
