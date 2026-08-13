#include <stdio.h>

int main()
{
    int i, j;

    printf("\nQ - 2\n");
    for(i=5;i>=1;i--){ 
        for(j=1;j<=i;j++) 
        printf("*"); 
        printf("\n"); 
    }
}