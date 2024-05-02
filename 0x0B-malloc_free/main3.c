#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	int i, k, j;	
	int w = 0;
	char *ptr;
	
	if (s1 == NULL)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
for (int k = 0; k < i; k++) {
        ptr[k] = s1[k];
    }
    for (int k = 0; k < j; k++) {
        ptr[i + k] = s2[k];

    }
	ptr[i+j] = '\0';
	return (ptr);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
