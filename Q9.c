#include <stdio.h>

int main()
{
    int i, j;

    printf("\nQ - 9\n");
    for(i=1;i<=5;i++){ 
        for(j=i;j<=5;j++) 
        printf("%d ",j); 
        printf("\n"); 
    }
    return 0;
}