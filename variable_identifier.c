#include "holberton.h"


/**
*varriable_identifier - identifier with a variable
*
*@pointer: A pointer that 
*/
char variable_identifier(char *pointer)
{
	int count = 0;

	while(pointer[count] != NULL)
	{
		if(pointer[count] == '%')
		{
			count++;
			if(pointer[count] == 'd')
			{
				type_int();
			}
			if(pointer[count] == 'c')
			{
				type_char();
			}
			if(pointer[count] == 's')
			{
				type_string();
			}
		}
	}
	return(p)
}
