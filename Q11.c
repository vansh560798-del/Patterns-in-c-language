#include <stdio.h>

int main()
{
    int i, j;
    
    printf("\nQ - 11\n");
    for(i=1;i<=5;i++){ 
        for(j=1;j<=i;j++) 
        printf("%d ",i); 
        printf("\n"); 
    }
}