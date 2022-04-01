#include <stdio.h>

#define IN 1
#define OUT 2

int main()
{
    int c, nl, nw, nc, s;

    s = 0;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            s = OUT;
        else if (s == OUT)
        {
            s = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}