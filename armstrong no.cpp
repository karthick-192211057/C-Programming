#include<stdio.h>
int main()
{
	int n,r,sum=0,n1;
	printf("enter a number:");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if (n1==sum)
	printf("it is an armstrong number");
	else
	printf("it is not an armstrong number");
}
