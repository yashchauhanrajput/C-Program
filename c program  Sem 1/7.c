   //Write a c program to interchange the value of two variables using third variable
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter two numbers=");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("Interchange=%d%d",a,b);
 }   
