#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - prints name
 *@name: the name
 *@f: void pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
