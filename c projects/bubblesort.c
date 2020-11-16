#include<stdio.h>

int main()
{

int data[1000];  //array of 8 elements//
 int x= 0,i=0;  //initializing pointer //
int n;         //n - number of arraylist//

printf("enter number you want to sort \t");
scanf("%i",&n);

for(i;i<=n-1;i++)
{
  printf("a[%i]: \t ", i+1);
  scanf("%i", &data[i]);
}
while(x<=n)
{
  {
    int k=0;
    while(k<=n)
    {
if(data[k]>data[k+1])
{
  int temp;                    //swapping//
  temp = data[k];
  data[k]=data[k+1];
  data[k+1]= temp;
}
else
{
   k=k+1;
}

}
x = x+1;
}
}


for(int i=0; i<n ;i++)
{
printf("%d ",data[i]);
}


}
