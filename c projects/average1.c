#include<stdio.h>
int main()
{
  int sum = 0;
  int arr[100000], numcount;
  float average;

 printf("enter the  numcount: \n");
 scanf("%i", &numcount);

 for(int i = 1; i<= numcount; i++)
 {
   printf("enter the value of num[%i]: \n", i);
   scanf("%i", &arr[i]);
  sum += arr[i];
 }
 
 printf("average = %f", average=sum/numcount);
return 0;
}
