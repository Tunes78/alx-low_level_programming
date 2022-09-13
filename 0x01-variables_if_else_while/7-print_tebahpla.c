#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*  * main - Entry point
*   *
*    * Return: Always 0 (Success)
*     * Return: Always 0 (Success/correct)
*/

int main(void)
{
	char low;
	char i;

	for (low = 'z'; low >= 'a'; low--)
	{
	putchar(low);
	for (i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);
	} 
}
