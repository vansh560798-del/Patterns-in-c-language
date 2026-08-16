#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\nQ - 52\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++) 
        {
            printf(" ");
        }
        if(i==3) 
        {
            printf("*****");
        }
        else 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}