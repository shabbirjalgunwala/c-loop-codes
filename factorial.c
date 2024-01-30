//program for calculating factorial of given number
//Developed By  - Shabbir   Dated - 30-01-2024

#include<stdio.h>
int main ()
{
	int i ,number, fact = 1;
	
	//Taking Input a number from user to find its factorial
	printf("\n Enter any Number to Find out its Factorial :");
	scanf("%d",&number );
	
	//loop for calculating factorial
	for(i = number ; i>= 1 ; i--){
		
		fact = fact * i ;
	}
	
	//printing the calculated value of fact at output
	printf("\nFactorial of %d = %d",number , fact );
	
	return 0 ;
}
