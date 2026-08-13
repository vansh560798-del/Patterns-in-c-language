#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\nQ - 12\n");
    n=1;
    for(i=1;i<=5;i++){ 
        for(j=1;j<=i;j++) 
        printf("%d ",n++); 
        printf("\n"); 
    }
}