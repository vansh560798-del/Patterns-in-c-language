#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\nQ - 53\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++) 
        {
            printf("%d ",2*j);
        }
        printf("\n");
    }
    return 0;
}