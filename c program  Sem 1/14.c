#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the number=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("maximum=%d",a);
		else
		printf("maximum=%d",c);
		
	}
	if(b>c)
	printf("maximum=%d",b);
	else
	printf("maximum=%d",c);
}
