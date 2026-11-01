#include <stdio.h>

int main()
{
    int a = 1, b = 1, c = 1;
    if (b == c && c++)
    {
        printf("%d", c);
    }
}