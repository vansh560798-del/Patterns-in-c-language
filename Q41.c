#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\nQ - 41\n");
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--) 
        {
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}