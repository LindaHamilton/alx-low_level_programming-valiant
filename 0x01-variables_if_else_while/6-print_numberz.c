#include <stdio.h>
/**
 * main -> prints all digitd between 0 and 10 using only putchar
 * Return: Always 0.
 */
int main(void) 
{
	int i = 0;
    	while (i < 10) 
	{
        	putchar(i + '0');/* convert the integer to its ASCII representation */
        	i++;
    	}
    	putchar('\n');/* print a newline character */
    	return 0;
}
