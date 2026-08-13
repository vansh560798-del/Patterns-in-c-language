#include <stdio.h>

int main()
{
    int i, j;

    printf("\nQ - 7\n");
    for(i=1;i<=5;i++){ 
        for(j=5;j>=6-i;j--) 
        printf("%d ",j); 
        printf("\n"); 
    }
}