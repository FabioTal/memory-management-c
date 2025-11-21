#include <stdio.h>

int isArrayPal(int *arr, int size)
{
    if(size<=1)
    return 1;
    if(arr[0]!=arr[size-1])
    return 0;
    else 
    return isArrayPal(arr+1, size-2);
   
}