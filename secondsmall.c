#include <stdio.h>
int finthesmall(int *arr, int size)
{
    int i=1;
    int min1=arr[0];
    int min2=arr[0];
    while(i<size)
    {
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2)
        {
            min2=arr[i];
        }
        i++;
    }
    return min2;
}