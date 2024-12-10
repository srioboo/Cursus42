#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "../libft.h"
#include <assert.h>
#include <stdlib.h>

/*
#include <unistd.h>
#include <setjmp.h>

// redefine assert to set a boolean flag
#ifdef assert
#undef assert
#endif
#define assert(x) (rslt = rslt && (x))
// main result return code used by redefined assert
static int rslt;
*/

static void	fun_start(const char *method_name)
{
	printf("\n==== TEST: %s ====\n", method_name);
}

static void	fun_end(const char *method_name)
{
	printf("\n==== OK: %s ====\n", method_name);
}

void	test_ft_memmove(void)
{
	const char	*method_name = "test_ft_memmove";
	void		*dest0[10];
	void		*dest1[10];

	fun_start(method_name);
	// char *orig = memmove(dest0, "123456", 4);
	// printf("--- orig: %s\n", orig);
	// char *new = ft_memmove(dest1, "123456", 4);
	// printf("---  new: %s\n", new);
	char *orig1 = memmove(dest0 + 2, "123456", 4);
	printf("--- orig: %s\n", orig1);
	char *new1 = ft_memmove(dest1 + 1, "123456", 4);
	printf("---  new: %s\n", new1);
	fun_end(method_name);
}

void	test_ft_bzero(void)
{
	const char	*method_name = "test_ft_bzero";
	size_t		len = 10;
	void		*ptr = malloc(len);
	char		*test;

	test = (char *)ptr;
	fun_start(method_name);
	printf("--- orig :\n");
	bzero(ptr, len);
	printf("---  new :\n");
	ft_bzero(ptr, len);
	printf("%s", test);
	fun_end(method_name);
}

int	test_ft_memset(void)
{
	const char	*method_name = "test_ft_memset";
	size_t		len = 10;
	void		*ptr = malloc(len);
	void		*ptr2 = malloc(len);
	size_t		i;

	if (ptr == NULL)
	{
		fprintf(stderr, "Not enough memory\n");
		return (0); // or whatever, do not continue
	}
	fun_start(method_name);
	printf("--- orig ---\n");
	memset(ptr, 1, len);
	char *base = ptr;
	i = 0;
	while (base[i])
	{	
		printf("%d", base[i]);
		// assert(base[i] != 0);
		i++;
	};

	free(ptr);
	printf("\n--- new ---\n");
	memset(ptr2, 1, len);
	char *base2 = ptr2;
	i = 0;
	while (base2[i])
	{	
		printf("%d", base2[i]);
		// assert(base[i] != 0);
		i++;
	};
	
	free(ptr2);
	fun_end(method_name);
	return (0);
}
