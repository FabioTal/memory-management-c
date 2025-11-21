#include <stdio.h>
#define SIZE 4
int findifKeyInArray(int *str, int size, int key)
{
    int i=0;
    for(i=0; i<size; i++)
    {
        if(str[i]==key)
        return 1;
    }
    return 0;
}

int main()
{
    int grades[SIZE]={80,85,72,90};
    int result;
    result=findifKeyInArray(grades,SIZE,80);
    return 0;
}