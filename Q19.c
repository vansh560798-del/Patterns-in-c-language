#include <stdio.h>

int main()
{
    int i, j;
    printf("\nQ - 19\n");
    for(i=1;i<=4;i++){ 
        for(j=1;j<=i;j++) 
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}