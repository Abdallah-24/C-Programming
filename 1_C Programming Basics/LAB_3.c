/***********************************************************/
/************** Name 	 : Abdallah Ali-Allah **************/
/************** Date 	 : 5/2/2022           **************/
/************** Compiler : gcc                **************/
/************** Version  : 1.0                **************/
/**************             LAB_3             **************/
/*      Write a C code that will ask the user to enter     */
/* two values and print their summation and multiplication */
/***********************************************************/

/* Include stdio.h library to use printf and scanf functions */
#include "stdio.h"

/* define the main function */
void main(void)
{
	/* Define a variable to save first value */
	int number_1;
	
	/* Define a variable to save second value */
	int number_2;
	
	/* Define a variable to save summation and multiplication values */
	int sum,mult;
	
	/* Print a message telling the user to enter the first value */
	printf("Please enter the first value : ");
	
	/* Get the value from the user */
	scanf("%d",&number_1);
	
	/* Print a message telling the user to enter the second value */
	printf("Please enter the second value : ");
	
	/* Get the value from the user */
	scanf("%d",&number_2);
	
	/* Make summation operation */
	sum = number_1 + number_2;
	
	/* Make summation operation */
	mult = number_1 * number_2;
	
	/* Print the result */
	printf("a + b = %d\n",sum);
	printf("a x b = %d",mult);
	
	/* End of main function */
}