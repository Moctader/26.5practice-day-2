/*
we give you string, every string has decimal value. if the decimal value of character is even then make 
the character uppercase. Implementing this using function.

Note- it is guranted that string is always in lowercase.
*/

#include<stdio.h>
#include<string.h>

void is_even(char name[])
{
    int i;
    for ( i = 0; i < strlen(name); i++)
    {
        if (name[i]%2==0)
        {
            name[i]=name[i]-32;
        }
        
        
    }
    printf("%s", name);

}

int main(){

    char name[100];
    scanf("%s", name);
    is_even(name);
    return 0;
}
