#include <stdio.h>

int main()
{
    int i, j;
    
    printf("\nQ - 14\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            if(j<=i) 
            {
                printf("%d",j);
            }
            else 
            {
                printf("%d",2*i-j);
            }
        }
        printf("\n");
    }
}