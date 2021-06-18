/* Enter your solutions in this file */
#include <stdio.h>

int max(int x[], int count)
{
  int big=x[0];
  for (int i=1;i<count;i++)
  {
    if (big<x[i])  
    big=x[i];
  }
  return big;
}

int min(int x[], int count)
{
  int small=x[0];
  for (int i=1;i<count;i++)
  {
    if (small>x[i])  
    small=x[i];
  }
  return small;
}

float average(int x[], int size)
{
  int i;
  float sum=0.0;
  for (i=0; i<size; ++i)
  {
    sum+=x[i];
  }
  float average=sum/size;
  return average;
}

int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

int factors(int num, int ret[])  
    {  
        int i,count=0;  
        printf("\nPrime Factors of %d are ..\n", num);  
        for(i = 2; num > 1; i++)  
        {  
            while(num % i == 0)  
            {  
                ret[count]=i;
                count++;  
                num = num / i;  
            }  
        }  
        for (i=0; i<count; i++)
          printf("%d ", ret[i]);
        printf("\n");
        return count;  
    }  


