#include <stdio.h>

int main()
{
    int i, j, n;
 printf("\nQ - 45\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            if(j<=i) 
            {
            printf("%c ",'A'+j-1);
            }
            else 
            {   
            printf("%c ",'A'+2*i-j-1);
            }
        }
        printf("\n");
    }
    return 0;
}