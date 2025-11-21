#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

// Deklarimi i funksioneve
int *createArray();
void printArray(int *arr, int size);

int main()
{
    int *arr;
    arr = createArray();
    printArray(arr, SIZE);
    free(arr); // Mos harro të lirosh memorien!
    return 0;
}

int *createArray()
{
    // Aloko memorie dinamike në heap (jo në stack)
    int *myarr = (int*)malloc(SIZE * sizeof(int));
    int i;
    
    if(myarr == NULL) {
        printf("Gabim në alokimin e memories!\n");
        exit(1);
    }
    
    printf("Fut %d elemente në array:\n", SIZE);
    for(i = 0; i < SIZE; i++)
    {
        printf("Fut numrin %d: ", i+1);
        scanf("%d", &myarr[i]);
    }
    return myarr;
}

void printArray(int *arr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Korrigjuar nga pritnf
}