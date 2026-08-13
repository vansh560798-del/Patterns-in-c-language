#include <stdio.h>

int main()
{
    int i, j;

    printf("\nQ - 27\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i==1 || i==4 || j==1 || j==4)
                printf("1");
            else
                printf("2");
        }
        printf("\n");
    }
}