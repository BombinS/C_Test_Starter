#include <stdio.h>

int main()
{
    char c = 5;
    c = c | (1 << 1);
    printf("%d", c);
}