#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter limit = ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum+=i;
		
	}
	printf("%d\n",sum);
	return 0;
}
