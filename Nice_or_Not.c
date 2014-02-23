#include<stdio.h>
#include<string.h>
int main()
{
char str[10][30];
int t,i,j,k,len,res[10],count[10];
scanf("%d",&t);
for(i=0;i<t;i++)
{
 scanf("%s",str[i]);
 len=strlen(str[i]);
 j=0;k=(len/2)+1;
  while(k<=len)
  {
   if(str[i][j]==str[i][k])
   {count[i]++;j++;k++;}
   else
   {k++;j=0;count[i]=0;}
  len--;
  }
}
for(i=0;i<t;i++)
{
if(count[i]==0)
 printf("NOT\n");
else
 printf("NICE\n");
}
return 0;
}
