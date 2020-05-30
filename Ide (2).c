#include<stdio.h>
int main()
{
	int num,sum=0,r;
	printf("enter a number:");
	scanf("%d",&num);
	while(num)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	printf("sum of digits of number:%d",sum);
	return 0;
}
