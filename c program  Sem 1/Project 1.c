#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int number,guess,nguesses=1;
	srand (time(0));
	number=rand()%100+1;
	//printf("random is =%d",number); 
	do
	{
		printf("guess the number between 1 t0 100\n");
		scanf("%d",&guess);
		if(guess>number)
		{
			printf("lower number please\n");
		}
		else if(guess<number)
		{
			printf("Higher number please\n");
		}
		else
		{
			printf("You guessed it in %d attemts\n",nguesses);
		}
		nguesses++;
	}
		while(guess!=number);
	
}
