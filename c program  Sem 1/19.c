#include<stdio.h>
void main()
{
	int n,sum=0,t;
	printf("Enter any number");
	scanf("%d",&n);
	while(n>0)
	{
		t=n%10;
		sum=sum+t;
		n=n/10;
	}
	printf("sum of digit=%d",sum);
}
