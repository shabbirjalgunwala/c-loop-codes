//Program for Printing Numbers According to its Starting and Ending Point
//Developed By - Shabbir    Dated - 30.01.2024
#include<stdio.h>
int main ()
{
	int i , startpoint , end ;
	
	printf("\n Enter the Starting Number");
	scanf("%d",& startpoint);
	
	printf("\n Enter the Ending Number");
	scanf("%d",& end);
	
	if( startpoint < end)
	{
		for ( i = startpoint ; i <= end ; i++ )
		{
			printf("\n%d",i);
		}
	}
	else
	{
		for ( i = startpoint ; i >= end ; i-- )
		{
			printf("\n%d",i);
		}	
	}
	return 0 ; 
}
