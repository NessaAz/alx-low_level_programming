#include <stdio.h>

/**
 * func_zero - function to be executed before main function
*/

void __attribute__ ((constructor)) func_zero()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
