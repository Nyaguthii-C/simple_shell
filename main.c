#include "shell.h"

/**
* main - prints simple shell
*
* Return: Always 0
*
*/
int main(void)
{
	char *buf = NULL;
	size_t size = 10;
	ssize_t buf_read;

	buf = malloc(sizeof(char) * size);

	if (buf == NULL)
	{
		printf("Failed to allocate memory");
		return (0);
	}
	while (buf_read != -1)
	{
		printf("$ ");
		buf_read = getline(&buf, &size, stdin);
		printf("%s\n", buf);
	}
	free(buf);
	return (0);
}
