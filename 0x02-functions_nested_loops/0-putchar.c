#include < unistd.h >

/*
 * _putchar- prints the character c to stdout
 *      followed by a new line 
 *  @c : The character to print
 *
 *  Return : on success 1
 *  On error, -1 is returned, and errno is set appropriately.
 *  
 *  */
int _putchar(char c)
{
	        return (write( 1, & c, 1 ));
	}