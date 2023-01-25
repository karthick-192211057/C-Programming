#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i=0;
	printf("enter a number:");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	while (i<=n)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
		i++;
	}
	
	
}
