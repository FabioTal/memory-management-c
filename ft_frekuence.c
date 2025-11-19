#include <stdio.h>
#define SIZE 5

void printFreq(int *arr, int size)
{
    int countVal;
    int i;
    int j;
    int leftflag;
    
    // Process each element
    for(i = 0; i < size; i++)
    {
        countVal = 1;
        leftflag = 0;
        
        // Left part - check if element already processed
        for(j = 0; j < i; j++)
        {
            if(arr[j] == arr[i])
            {
                leftflag = 1;
                break;
            }
        }
        
        // Skip if already counted
        if(leftflag == 1)
        {
            continue;
        }
        
        // Right part - count occurrences
        for(j = i + 1; j < size; j++)
        {
            if(arr[j] == arr[i])
            {
                countVal++;
            }
        }
        
        // Print the element and its frequency
        printf("%d occurs %d time(s)\n", arr[i], countVal);
    }
}

int main()
{
    int arr[SIZE] = {1, 2, 2, 3, 1};
    
    printf("Array elements: ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nFrequency count:\n");
    
    printFreq(arr, SIZE);
    
    return 0;
}