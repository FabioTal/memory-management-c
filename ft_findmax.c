#include <stdio.h>
int findmax(int *str, int len)
{
  int i=0;
  int max;
  max=str[0];
  while(str[i] && i<len )
  { 
    if(str[i]>max)
    {
        max=str[i];
    }
    i++;
  }
  return max;
}
int main()
{
    int grades[4]={80,85,72,90};
    int maxGrade;
    maxGrade=findmax(grades, 4);
    printf("Max=%d",maxGrade);
    return 0;
}