#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\nQ - 55\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i==j) printf("%d",i);
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}