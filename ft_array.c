#include <stdio.h>
#define SIZE 4
void intputArray(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("Enter value %d",i+1);
        scanf("%d", &arr[i]);
    }
}
void outputarray(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("Value #%d :%d\n",i+1, arr[i]);
    }
}
int main()
{;

    int grades[SIZE];
    intputArray(grades, SIZE);
    outputarray(grades, SIZE);
    return 0;


}