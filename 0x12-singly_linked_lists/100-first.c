#include <stdio.h>
/**
 * startupfun - Apply constructor attribute to startupfun
 *
 */
void startupfun(void) __attribute__ ((constructor));

/**
 * startupfun - implementation of startupfun
 */
void startupfun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
