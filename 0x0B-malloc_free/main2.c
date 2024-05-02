#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str)
{
	int i;
	int j;
	char *ptr;
	if (str == NULL)
		return (NULL);
	if (str != NULL)
	{
		for (i = 0; *(str + i) != '\0'; i++)
			;
		ptr = malloc((i + 1) * (sizeof(char)));
		if (ptr == NULL)
			return (NULL);
		for (j = 0; str[j] != '\0'; j++)
			ptr[j] = str[j];
			ptr[j+1] = '\0';	
		return (ptr);
	}
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
