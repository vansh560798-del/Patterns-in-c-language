#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\nQ - 57\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==1) printf("@ ");
            else printf("# ");
        }
        printf("\n");
    }
    return 0;
}