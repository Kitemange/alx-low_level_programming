#include <stdio.h>

int main(int c)
{
    while ((c = getchar()) != EOF)
    {
        /* code */
        putchar(c);
        printf("value of EOF is: %d\n", EOF);
    }
    return(0);    
}