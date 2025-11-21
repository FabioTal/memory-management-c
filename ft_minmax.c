#include <stdio.h>
void findminmax(int *arr, int size, int *min, int *max)
{
   int i=0;
   *min=arr[0];
   *max=arr[0];
   while(arr[i] && i<size)
   {
    if(arr[i]< *min)
    {
        *min=arr[i];
   }
   if(arr[i]> *max)
    {
        *max=arr[i];
   }
   i++;
}
}
int main()
{
    int grades[]={ 80, 90, 100};
    int min;
    int max;
    findminmax(grades, 3, &min , &max);

    printf("The maximum value in your grade is: %d\n", max);
    printf("The minimum value in your grade is: %d\n", min);
    return 0;
}