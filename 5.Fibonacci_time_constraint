#include<stdio.h>
int zero=0,one=0;
int fibonacci(int n)
{
 if (n == 0)
 {
  zero+=1;
  return 0;
 }
 else if (n == 1)
 {
  one+=1;
  return 1;
 }
 else if (n==2)
 {
  one+=1;
  zero+=1;
  return 1;
 }
 else if(n==3)
 {
  one=one+2;
  zero=zero+1;
  return 2;
 }
 else if(n==4)
 {
  zero=zero+2;
  one=one+3;
  return 3;
 }
 else if(n==5)//we could actually stop it right here added it just to make sure
 {
  zero=zero+3;
  one=one+5;
  return 5;
 }
 else if(n==6)
 {
  zero=zero+5;
  one=one+8;
  return 8;
 }
else if(n==7)
 {
  zero=zero+8;
  one=one+13;
  return 13;
}
else
{
 return fibonacci(n - 1) + fibonacci(n - 2);
}
}

int main()
{ 
 int n,test,i,a[50];
 scanf("%d",&test);
 for(i=0;i<test;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<test;i++)
 {
  one=zero=0;
  fibonacci(a[i]);
  printf("%d ",zero);
  printf("%d ",one);
  printf("\n");
 } 
}
