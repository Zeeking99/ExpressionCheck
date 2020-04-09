struct
{
	int top;
	int size;
	char *array;
}typedef stack;

void init(stack *, int);
void push(stack *, char);
char pop(stack *);
char peek(stack *);
int isempty(stack *);
int openingmatch(char,char);
