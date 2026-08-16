#include <stdio.h>

int main()
{
    int i, j, n;
    
    printf("\nQ - 28\n");
    n=1;
    for(i=1;i<=4;i++){ 
        for(j=1;j<=i;j++) 
        {
            printf("%d ",n++);
        }
        printf("\n");
    }
    return 0;
}