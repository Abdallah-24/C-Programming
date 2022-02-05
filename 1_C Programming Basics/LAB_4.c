/***********************************************************/
/************** Name 	 : Abdallah Ali-Allah **************/
/************** Date 	 : 5/2/2022           **************/
/************** Compiler : gcc                **************/
/************** Version  : 1.0                **************/
/**************             LAB_4             **************/
/*   Write a C code that takes 2 numbers and print their   */
/*   summation, subtraction, anding, oring, and Xoringn    */
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

	/* Print a message telling the user to enter the first value */
	printf("Please enter number a : ");
	
	/* Get the value from the user */
	scanf("%d",&number_1);
	
	/* Print a message telling the user to enter the second value */
	printf("Please enter number b : ");
	
	/* Get the value from the user */
	scanf("%d",&number_2);

	/* Print the result */
	printf("a + b = %d\n",number_1 + number_2);
	printf("a - b = %d\n",number_1 - number_2);
	printf("a & b = %d\n",number_1 & number_2);
	printf("a | b = %d\n",number_1 | number_2);
	printf("a ^ b = %d\n",number_1 ^ number_2);
	
	/* End of main function */
}