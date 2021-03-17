#include <stdio.h>
char *ft_strcpy(char *dest, char *src);
int main(void)
{
	char *dest;
	int *i;
	char src[] = "succes";

	ft_strcpy(dest, src);
	printf("dest is %s\n", dest);
	return (0);
}
