#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "../libft.h"
#include <assert.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

static void	fun_start(const char *method_name)
{
	printf("\n==== TEST: %s ====\n", method_name);
}

static void	fun_end(const char *method_name)
{
	printf("\n==== OK: %s ====\n", method_name);
}

void	test_ft_toupper(void)
{
	const char	*method_name = "test_ft_toupper";
	int			test;

	fun_start(method_name);
	test = 97;
	assert(toupper(test) == test - 32);
	assert(ft_toupper(test) == test - 32);
	test = 122;
	assert(toupper(test) == test - 32);
	assert(ft_toupper(test) == test - 32);
	fun_end(method_name);
}

void	test_ft_tolower(void)
{
	const char	*method_name = "test_ft_tolower";
	int			test;

	fun_start(method_name);
	test = 65;
	assert(tolower(test) == test + 32);
	assert(ft_tolower(test) == test + 32);
	test = 90;
	assert(tolower(test) == test + 32);
	assert(ft_tolower(test) == test + 32);
	fun_end(method_name);
}
