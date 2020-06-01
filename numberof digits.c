#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		i++;
		n=n/10;
	}
	printf("number of digits are:%d",i);
}


