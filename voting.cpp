#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eligible for voting");
	}
	else
	printf("You can vote in %d years",(18-age));
	
}
