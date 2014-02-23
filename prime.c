#include<stdio.h>
int main()
{
 int t,a,i,p[5],b;
 scanf("%d",&t);
 for(a=0;a<t;a++)
 scanf("%d",&p[a]);
 for(a=0;a<t;a++)
 {
  for(i=p[a]+1;i<=600;i++) 
  {
   b=prime(i);
   if(b==0) 
   {
    printf("%d\n",i);
    break;
   }
  }
 }
}
int prime(int n)
{
 int i,flag=0;
 for(i=2;i<=(n/2+1);i++)
 {
  if(n % i ==0)
  {
   flag=1;
   break;
  }
 }
 if(flag==0)
   return 0;
 else
   return 1;
}
