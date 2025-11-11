#include <stdio.h>
#define SIZE 4
int sumarray(int *arr, int size)
{
    int i;
    int sum;
    i=0;
    sum=0;
    while(arr[i] && i<size)
    {
        sum=sum+arr[i];
        i++;
    }
    return sum;
}
int ft_avarage(int sum, int size)
{
    int avarage;
    avarage=sum/size;
    return avarage;
}
int main()
{
    int grades[SIZE]={80,85,72,90};
    int sum=0;
    sum=sumarray( grades, SIZE);
    double avarage;
    avarage=ft_avarage(sum, SIZE);
    printf("%lf",avarage);
    return 0;
}