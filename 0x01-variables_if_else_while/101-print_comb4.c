#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{

	int i = 0, j = 1, k = 2;
    	while (i < 8)
       	{
	       	while (j < 9)
	       	{
			 while (k < 10) 
			 {
				if (i != j && i != k && j != k) 
				{ /* check that the digits are different */
                    			int smallest = i;
                    			if (j < smallest) smallest = j;
                    			if (k < smallest) smallest = k;
                    			putchar(smallest + '0');
                    			if (i+j+k != 24) 
					{
                        			putchar(',');
                        			putchar(' ');
                    			}
                		}
                		k++;
            		}
            		j++;
            		k = j + 1;
       		 }	
        	i++;
        	j = i + 1;
        	k = j + 1;
    	}
    	putchar('\n'); // print a newline character
    	return 0;
}
