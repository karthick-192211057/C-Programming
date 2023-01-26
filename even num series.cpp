#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter the limit = ");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
}
