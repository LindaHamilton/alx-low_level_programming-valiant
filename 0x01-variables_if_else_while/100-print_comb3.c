#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void) 
{
    int i = 0, j = 1;
    while (i < 9) 
    {
        while (j < 10) 
	{
            putchar(i + '0'); 
            putchar(j + '0'); 
            if (i != 8 || j != 9) 
	    { /* don't print the comma and space after the last combination */
                putchar(',');
                putchar(' '); 
            }
            j++;
        }
        i++;
        j = i + 1;
    }
    putchar('\n'); /* print a newline character */
    return 0;
}

