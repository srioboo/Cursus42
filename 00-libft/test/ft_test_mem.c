#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "../libft.h"
#include <assert.h>
#include <stdlib.h>

static void	fun_start(const char *method_name)
{
	printf("\n==== TEST: %s ====\n", method_name);
}

static void	fun_end(const char *method_name)
{
	printf("\n==== OK: %s ====\n", method_name);
}

int	test_ft_memset(void)
{
	const char	*method_name = "test_ft_memset";
	size_t		len = 100;
	void		*ptr = malloc(len);
	size_t		i;

	if (ptr == NULL)
	{
		fprintf(stderr, "Not enough memory\n");
		return (0); // or whatever, do not continue
	}
	fun_start(method_name);
	printf("--- orig ---\n");
	memset(ptr, 0, len);
	char *base = ptr;
	i = 0;
	while (base[i])
	{
		assert(base[i] == 0);
		i++;
	};
	free(ptr);
	printf("--- new ---\n");
	fun_end(method_name);
	return (0);
}
