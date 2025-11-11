#include <stdlib.h>
#include <stdio.h>
#include<string.h>

void genericSwap (void *a, void *b, int size)
{
    void *tempmem=malloc(size);
    memcpy(tempmem, a, size);
    memcpy(a, b, size);
    memcpy(b, tempmem, size);
    free(tempmem);

}
int main ()
{
    int num1=5;
    int num2=7;
    double average1=60.4;
    double average2=55.5;
    genericSwap(&average1, &average2, sizeof(double));
    genericSwap(&num1, &num2, sizeof(int));
   printf("num1: %d, num2: %d\n", num1, num2);
    printf("average1: %.1f, average2: %.1f\n", average1, average2);
    
    return 0;
}