#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - using function pointer to print a name
 * @name: srting to add name
 * @f:function pointer
 * Return:nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
