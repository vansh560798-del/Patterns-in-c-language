#include <stdio.h>

int main()
{
    int i, j;

    printf("\nQ - 10\n");
    for(i=5;i>=1;i--){ 
        for(j=i;j>=1;j--) 
        printf("%d ",j); 
        printf("\n"); 
    }
    return 0;
}