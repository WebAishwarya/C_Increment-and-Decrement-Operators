/*
    5.Increment and Decrement Operators
    Problem :   Write a program that demonstrates the usage of pre-increment, post-increment, pre-decrement, and post-decrement operators on an integer variable.
    Display the results before and after using these operators.
*/

#include<stdio.h>

int main()
{
	printf("PROGRAM FOR PERFORMING INCREMENT AND DECREMENT OPETATORS\n");

	int a, b;
	
	printf("\nEnter the first number a for performing increment operator : ");
	scanf("%d", &a);

	printf("\nValue of a before increment operator : %d", a);
	printf("\nPre-increment of a : %d", ++a);
	printf("\nPost-increment of a : %d", a++);
	printf("\nValue of a after increment operator : %d", a);

	printf("\n\nEnter the second number b for performing decrement operator : ");
	scanf("%d", &b);
	
	printf("\nValue of b before increment operator : %d", b);
	printf("\nPre-decrement of b : %d", --b);
	printf("\nPost-decrement of b : %d", b--);
	printf("\nValue of b after increment operator : %d", b);

	return 0;
}
