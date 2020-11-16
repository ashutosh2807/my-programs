#include<stdio.h>

int main ()
{
  int data[8]= {13,23,27,32,51,57,66,85};         //array of 8 sorted elements//
  int beg= 0;
  int end= 8;
  int sum= beg+end;
  int fnd= 45;              //the element we are finding is find/fnd//
  int mid;
  mid = sum/2;         //initializing the value of mid//

while(beg<=end)
  {

    if(data[mid]<fnd)
    {beg = mid+1;}

    else if(data[mid]== fnd)
    {  printf("element was found at location %d\n", mid+1);
       break;}

    else
    {end = mid-1;}

     mid = (beg+end)/2;
  }

  if(beg>end)
 { printf("%d was not found in the list\n",fnd);}


  }
