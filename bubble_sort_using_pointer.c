/*
In bubble sort we compare two adjacent elements and swape them untill they are in the intended order.
You have given positive integer N, the size of array as input. Take an array of size N as a input and sort
by using bubble sort. You must make a function for swapping numbers by using pass by reference. 
*/

#include<stdio.h>

void ascending_sort(int* ara, int N);


int main()
{
    int N, i;
    scanf("%d", &N);
    int ara[10];
    for(i=0; i<N; i++)
    {
        scanf("%d", &ara[i]);
    }

    ascending_sort(ara, N);

    return 0;
}

void ascending_sort(int* ara, int N)
{
    int i, j, temp;
    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if (*(ara+j)<*(ara+i))
            {
                temp=*(ara+i);
                *(ara+i)=*(ara+j);
                *(ara+j)=temp;
            }
            
        }
    }

    for(i=0;i<N;i++)
        printf("%d ",*(ara+i));


}
