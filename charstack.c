#include <stdio.h>
#include <stdlib.h>

								// Declaring the stack data type
struct
{
	int top;
	int size;
	char *array;
}typedef stack;
	
								// Functions to perform operations on stack
void init(stack *s, int size )
{
	s->top = -1;
	s->array = (char *)malloc(size * sizeof(char));
	s->size = size;
}

void push(stack *s, char num)
{
	if(s->top == s->size-1)
		return;

	s->array[++s->top] = num;
}

int isempty(stack *s)
{
	if(s->top == -1)
		return 1;
	else
		return 0;
}


char pop(stack *s)
{
	if(isempty(s) == 0)
		return s->array[s->top--];
	else
		return 1;
}

char peek(stack *s)
{
	if(isempty(s) == 0)
		return s->array[s->top];
	else
		return 1;
}

