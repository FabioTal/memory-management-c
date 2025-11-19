#include <stdio.h>
#define SIZE 4
void swap(char *ptr1, char *ptr2)
{
    char temp;
    temp= *ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void printArray(char *arr, int size)
{
    int i;
for (i=0; i<size; i++)
{
    printf("%c",arr[i]);
    printf("\n");
}
}

void reverseARRITERATIVE(char * arr, int size)
{
    int i;
    for(i=0; i<size/2; i++)
    {
        swap(&arr[i], &arr[size-1-i]);
    }
}
 void revereARRRECURSIVE(char *arr, int size)
 {
    if(size>1)
    {
        swap(&arr[0], &arr[size-1]);
    }
 }

int main()
 {
 char arr[SIZE]={'a', 'f', 'k', 'd'};
 printArray(arr, SIZE);
 printf("\t \n");
 revereARRRECURSIVE(arr, SIZE);
  printArray(arr, SIZE);

 return 0;
 }