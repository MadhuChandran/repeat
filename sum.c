#include <stdio.h>

int main(void) {
	int t,i,j,flag=0,k;
	scanf("%d",&t);
	scanf("%d",&k);
	int a[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<t-1;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(a[i]+a[j]==k)
			{
				printf("%d %d",a[i],a[j]);
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("-1");
	}
	return 0;
}
