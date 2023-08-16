#include <stdio.h>
/**
 * main -Entry point
 * @void : Null value
 * Descrtiption :the code return numbers
 * Return:(0) return(0) if (Success)
 */

int main(void)
{
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 1; j <= 8; j++)
		{
			for (int k = 2; k <= 9; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k );
					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
