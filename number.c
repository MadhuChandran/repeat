#include <stdio.h>

int main(void) {
	int n,i,r,temp;
	scanf("%d",&n);
	while(n>0)
	{
		temp=n%10;
		n=n/10;
		r=temp;
		printf("%d",r);
	}
	return 0;
}
