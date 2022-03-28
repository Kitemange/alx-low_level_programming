#include <stdio.h>

int main(void) 
{
    int length,width,i,j;
    for(i=1;i<=length;i++)
    {
        for(j=1;j<=width;j++)
        {
            if((i+j)%2==0)
                printf("[X]");
            else printf("[ ]");
        }
        printf("\n");
    }
    return 0;
}