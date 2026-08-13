#include <stdio.h>

int main()
{
    int i, j;
    printf("\nQ - 20\n");
    for(i=1;i<=4;i++){ 
        for(j=1;j<=i;j++) 
        {   
            printf("%d ",j);
        }
        printf("\n");
    }
}