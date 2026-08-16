#include <stdio.h>

int main()
{
    int i, j, n;
 printf("\nQ - 44\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++) 
        {
            printf(" ");
        }
        for(j=1;j<=i;j++) 
        {
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}