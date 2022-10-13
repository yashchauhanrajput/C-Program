  //The distance between two cities (in km.) is input through the keyboard. Write a c 
  //program to convert and print this distance in meters, feet, inches and centimetres
  

#include<stdio.h>
void main()
{
	float km,cm,inh,f,me;
	printf("Enter the km=");
	scanf("%f",&km);
	cm=km*100000;
	printf("centmeter=%f\n",cm);
	inh=km*39370.0787;
    printf("inches=%d\n",inh);
	f=km*3280.8399;
	printf("feet=%f\n",f);
	me=km*1000;
	printf("meter=%f\n",me);
	
}
