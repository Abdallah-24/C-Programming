/***********************************************************/
/************** Name 	 : Abdallah Ali-Allah **************/
/************** Date 	 : 5/2/2022           **************/
/************** Compiler : gcc                **************/
/************** Version  : 1.0                **************/
/**************             LAB_2             **************/
/*      Write a C code that will ask the user to enter     */
/*                  a value then print it.                 */
/***********************************************************/

/* Include stdio.h library to use printf and scanf functions */
#include "stdio.h"

/* define the main function */
void main(void)
{
	/* Define a variable to save a value from user */
	int variable;
	
	/* Print a message telling the user to enter the value */
	printf("Please enter the value : ");
	
	/* Get the value from the user */
	scanf("%d",&variable);
	
	/* Print the user entered value */
	printf("The value you entered is %d",variable);
	
	/* End of main function */
}