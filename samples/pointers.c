#include <stdio.h>

int main()
{
    char arr[4] = {1, 2, 3, 4};
    short *p = (short*)arr;
    p++;
    (*p)++;
    printf("%x\n", *p);
}