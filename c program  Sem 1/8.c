   //Write a c program to interchange the value of two variables using without third variable
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers=");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Interchange=%d%d",a,b);
 }   
