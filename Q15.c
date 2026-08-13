#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\nQ - 15\n");
    for(i=0;i<5;i++)
    {
        n=1;
        for(j=0;j<=i;j++)
        {
            printf("%d ",n);
            n=n*(i-j)/(j+1);
        }
        printf("\n");
    }
}