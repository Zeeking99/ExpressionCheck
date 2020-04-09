int openingmatch(char c, char d)
{
	if(c == '(')
	{		
		if(d == ')')
			return 1;
		else
			return 0;
	}
	else if(c == '{')
	{
		if(d == '}')
			return 1;
		else
			return 0;
	}
	else if(c == '[')
	{
		if(d == ']')
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
