include "main.h"

/**
* print_alphabet - print alphabet
* Return: Always 0
*/

int main() 
{
	print_alphabet();
	return 0;
 }

void print_alphabet(void)
{
	char c;
       	int i;

       	for (c='a'; c<='z'; ++c)
	{
		 putchar(c);
	}
	putchar('\n');
	return 0;
}
