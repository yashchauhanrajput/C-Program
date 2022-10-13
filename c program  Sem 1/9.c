    // Write a c program to calculate simple interest.
#include<stdio.h>
void main()
{
	int sp,in,ra,t;
	printf("Enter the interst=");
	scanf("%d\n",&in);
	printf("Enter the rate=");
	scanf("%d\n",&ra);
	printf("Enter the  year=");
	scanf("%d\n",&t);
	sp=(in*ra*t)/100;
	printf("simpel interst=%d",sp);
}
