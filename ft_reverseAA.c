#include <stdio.h>
#define SIZE 5

void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

}
void reverseArrayRec(int *arr, int size)
{
    if(SIZE>1)
    {
        swap(arr, arr + size -1);
        reverseArrayRec(arr +1, size-2);
    }
}
void printArray(int *arr, int size)

int main()
{
    return 0;
}