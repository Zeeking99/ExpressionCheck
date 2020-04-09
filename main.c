#include "charstack.h"
#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char **argv)
{
	stack STACK;
	int ERROR = FALSE;
	int i,size = strlen(argv[1]);
	char e;

	init(&STACK, size); // initializing the stack with the size of the expression;

	for(i=0; argv[1][i] != '\0'; i++)
	{
		e = argv[1][i];

		if( e == '(' || e == '[' || e == '{' )	
		{
			push(&STACK, e);
			continue;
		}
		else if( e == ')' || e == '}' || e == ']' )
		{
			if(isempty(&STACK))
			{
				ERROR = TRUE;
				break;
			}
			else if( openingmatch( peek(&STACK), e ) == 1) // we will match the topelement of the stack with e[i] both should make a pair of brackets.
			{	
				pop(&STACK);
				continue;
			}
			else
			{
				ERROR = TRUE;
				break;
			}
		}
	}

	if( !ERROR && !isempty(&STACK))
		ERROR = TRUE;

	if(ERROR)
		printf("The given expression is not valid\n");
	else
		printf("The given expression is valid\n");

	return 0;
}

