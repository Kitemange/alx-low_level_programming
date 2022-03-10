#include <stdio.h>

int main(void)
{
    char i;
    int d;
    long int c;
    long long int e;
    float f;

    printf("The size of char is: %lu byte(s)\n",sizeof(i));
    printf("The size of int is: %lu byte(s)\n",sizeof(d));
    printf("The size of long int is: %lu byte(s)\n",sizeof(c));
    printf("The size of long long int is: %lu byte(s)\n",sizeof(e));
    printf("The size of float is: %lu byte(s)\n",sizeof(f));

    return 0;
}