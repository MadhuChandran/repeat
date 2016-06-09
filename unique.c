#include<stdio.h>
int main()
{
int i,n,u,flag=0;
scanf("%d",&n);
int array[n];
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
if(i==array[i])
{
u=i;
flag=1;
break;
}
}
printf("%d",array[u]);
}
