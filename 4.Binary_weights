#include <stdio.h>
int a[10];
int numofones(int n)
{
  int c,k,count=0;
  int i=0;
  for (c = 31; c >= 0; c--)
  {
    k = n >> c;
    if (k & 1)
	count++;
 }
  
 return count;
}
  
int numbers(int n)
{
 int i;
 for(i=0;i<10000;i++)
  {
   if(numofones(n)==numofones(n+i+1))
   {
    printf("%d\n",n+i+1);break;
   }
  }
}
int main()
{
 int i,test,n;
 scanf("%d",&test);
 for(i=0;i<test;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<test;i++)
 {
   numbers(a[i]);
 }
}
