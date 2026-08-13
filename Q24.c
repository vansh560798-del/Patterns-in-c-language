#include <stdio.h>

int main()
{
    int i, j;
    printf("\nQ - 24\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            if(j<=i) printf("%d",i-j+1);
            else printf("%d",j-i+1);
        }
        printf("\n");
    }
}