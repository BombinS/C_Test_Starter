#include <stdio.h>

int main()
{
    char c = 6;
    c = c & ~(1 << 2);
    printf("%d", c);
}