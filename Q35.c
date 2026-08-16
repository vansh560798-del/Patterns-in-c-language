#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\nQ - 35\n");
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i==1 || i==7 || j==1 || j==7)
                {
                printf("*");
                }
            else if(i==j || i+j==8)
                {
                printf("*");
                }
            else
                { 
                printf(" ");
                }
        }
        printf("\n");
    }
    return 0;
}