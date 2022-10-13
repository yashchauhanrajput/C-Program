    //Write a c program to calculate the area and circumference of the circle
#include<stdio.h>
void main()
{
	int r,pi=3.14,a,c;
	printf("Enter the area of circumferene=");
	scanf("%d",&r);
	
	a=pi*r*r;
	printf("area of circle=%d\n",a);
	c=2*pi*r;
	printf("circumference of circle=%d\n",c) ;
}
