#include <stdio.h>
void swapIntsNoThird1(int *a, int *b)
{
    *a= *a + *b;
    *b= *a - *b;
    *a= *a - *b;
}
int main()
{
    int a=5;
    int b=7;
    swapIntsNoThird1(&a, &b);
    printf("a=%d,b=%d" ,a,b);
    return 0;
}