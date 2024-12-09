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
