#include <stdio.h>

int main()
{
    int i, j, n;

    printf("\nQ - 30\n");
    for(i=1;i<=5;i++){ 
        for(j=1;j<=i;j++)
            {
            printf("%d ",i); 
            }
        printf("\n"); 
    }
    for(i=4;i>=1;i--){ 
        for(j=1;j<=i;j++) 
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}