#include <stdio.h>
void swapIntsNoThird2(int *a, int *b)
{
    *a= *a * *b;
    *b= *a / *b;
    *a= *a / *b;
}
int main()
{
    int a=5;
    int b=7;
    swapIntsNoThird2(&a, &b);
    printf("a=%d,b=%d" ,a,b);
    return 0;
}