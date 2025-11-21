#include <stdio.h>

void swapInts(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 4;
    int b = 5;
    swapInts(&a, &b);
    printf("a=%d , b=%d\n", a, b);
    return 0;
}
