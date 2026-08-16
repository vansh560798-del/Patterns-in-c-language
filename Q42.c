#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\nQ - 42\n");
    n='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++) 
        {
            printf("%c ",n++);
        }
        printf("\n");
    }
    return 0;
}