#include<stdio.h>
#include<stdlib.h>
#include<time.h> // time header file
int main()
{
	int min = 1;
	int max = 10;
	int guessCount = 0;
	int guesslimit = 3;
	int answer;
	int guess;
	int OutofCount = 0;
	
	srand(time(0)); 
	answer = (rand() % max) + min; 
	printf("You got only 3 chance.\n"
			"***********************\n");
	
	while(guess != answer && OutofCount == 0) 
	{
		if(guessCount < guesslimit)
		{
		
			printf("Enter a guess number \n");
			scanf("%d" ,&guess);
			guessCount++;
		}
	
		else
		{	
			OutofCount = 1; 
		}
	}
	if(OutofCount == 1) 
	{
		printf("You loss");
	}
	else 
	printf("You won"); 
}
