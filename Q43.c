#include <stdio.h>

int main()
{
    int i, j, n;
 printf("\nQ - 43\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++) 
        {
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    for(i=3;i>=1;i--)
    {
        for(j=1;j<=i;j++) 
        {
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}