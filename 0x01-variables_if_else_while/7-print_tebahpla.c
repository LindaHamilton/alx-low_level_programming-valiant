#include <stdio.h>
/** 
 * main -> prints all lowercase alphabets in reverse
 * Return: Always 0.
*/

int main(void)
{
	int i = 'z'; /* ASCII code for 'z'*/
	while (i >= 'a')
       	{
        	putchar(i); /* print the current character */
        	i--; /* move to the previous character */
    	}
    	putchar('\n'); /* print a newline character */
    	return 0;
}
