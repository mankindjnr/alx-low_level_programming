#include <stdio.h>

void beforeMain(void)__attribute__((constructor));

/**
 *beforeMain - function thats executed before main
 */
void  beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n\t"
	       "I bore my house upon my back!\n");
}
