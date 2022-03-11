#include <stdio.h>

int main()
{
    union Data
    {
        int i;
        short s[2];
    } data;

    data.i = 0;
    *(data.s) = 3;
    *(data.s + 1) = 5;
    printf("%x",data.i);
}