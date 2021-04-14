// Question 3
// Complete the following code.

 

// !!! "DO NOT USE ANY SPACE FOR YOUR ANSWER" !!!

// The program algorithm is described as follows:

// Find the number

// Firstly, ask the first user to enter a number between 10 and 99 to predict
// Then in a loop ask to second user an input to find first user’s number
// If the second user enters greater than first user’s number, warn him/her to enter a lower number
// Otherwise, warn the second user enter higher number
// After 4 iterations, if the second user can not find the correct number, ask him/her “do you want to continue?”
// If the user wants to continue, give him/her 1 more chance (each change has 4 iterations)
// Otherwise, terminate the program and give a message like “You Lost!!!”
// A sample output of the program like as follows:

// Guess a number between 10 and 99: 50                                                                                             
// Higher number please!                                                                                                            
// Guess a number between 10 and 99: 60                                                                                             
// Lower number please!                                                                                                             
// Press 1 if you want to contine: 1                                                                                                
// Guess a number between 10 and 99: 54                                                                                             
// Higher number please!                                                                                                            
// Guess a number between 10 and 99: 56                                                                                             
// Lower number please!                                                                                                             
// Guess a number between 10 and 99: 55                                                                                             
// Congratulations!!!                                                                                                               
// You find the number.

#include <stdio.h>

int main()
{
  int i,j,k,l=1;
	for(i=1;i<=5;i++){
		for(j=4;j>=i;j--){
			printf(" ");
			for(k=1;k<=l;k++){
					l = l+2;
					printf("%d",k);
			}	
		}
	printf("\n");	
	}
	return 0;
}