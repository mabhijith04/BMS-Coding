#include<stdio.h>
int main()
{
 int s,count[200];
 int k,a[20], b[20], i, j, m, n;
 scanf("%d",&k);
 for(s=0;s<k;s++)
 {
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
   scanf("%d",&a[i]);
  for(j=0;j<n;j++)
   scanf("%d",&b[j]);
  count[s]=pair(a,b,m,n);
 }
 for(s=0;s<k;s++)
 printf("%d\n",count[s]);
}

int pair(int arr[], int brr[], int m, int n)
{
 int count=0,i,j;
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 {
  if(arr[i]==brr[j])
  count++;
 }	
 return count;
}
