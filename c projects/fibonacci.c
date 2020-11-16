#include<stdio.h>
int main()
{
  unsigned long n0 = 0, n1 =1,  n2, i;

 printf("0: %d \n 1: %d\n" , n0, n1);

 for(i ;  ; ++i)
 {
   n2= n0+n1;
   printf("%lu: %lu\n",i+2, n2);

   n0 = n1;
   n1 = n2;
 }

 return 0;

}
