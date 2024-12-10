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

void	test_ft_isdigit(void)
{
	const char	*method_name = "test_ft_isdigit";
	int			test;

	fun_start(method_name);
	test = 48;
	assert(isdigit(test) > 0);
	assert(ft_isdigit(test) > 0);
	test = 57;
	assert(isdigit(test) > 0);
	assert(ft_isdigit(test) > 0);
	test = 2;
	assert(isdigit(test) == 0);
	assert(ft_isdigit(test) == 0);
	test = 97;
	assert(isdigit(test) == 0);
	assert(ft_isdigit(test) == 0);
	fun_end(method_name);
}

void	test_ft_isalpha(void)
{
	const char	*method_name = "test_ft_isalpha";
	int			test;

	fun_start(method_name);
	test = 65;
	assert(isalpha(test) > 0);
	assert(ft_isalpha(test) > 0);
	test = 90;
	assert(isalpha(test) > 0);
	assert(ft_isalpha(test) > 0);
	test = 2;
	assert(isalpha(test) == 0);
	assert(ft_isalpha(test) == 0);
	test = 97;
	assert(isalpha(test) > 0);
	assert(ft_isalpha(test) > 0);
	test = 122;
	assert(isalpha(test) > 0);
	assert(ft_isalpha(test) > 0);
	test = 130;
	assert(ft_isalpha(test) == 0);
	assert(isalpha(test) == 0);
	fun_end(method_name);
}

void	test_ft_isalnum(void)
{
	const char	*method_name = "test_ft_isalnum";

	fun_start(method_name);
	test_ft_isdigit();
	test_ft_isalpha();
	fun_end(method_name);
}

void	test_ft_isascci(void)
{
	const char	*method_name = "test_ft_isascci";
	int			test;

	fun_start(method_name);
	test = -1;
	assert(isascii(test) == 0);
	assert(ft_isascii(test) == 0);
	test = 0;
	assert(isascii(test) > 0);
	assert(ft_isascii(test) > 0);
	test = 127;
	assert(isascii(test) > 0);
	assert(ft_isascii(test) > 0);
	test = 128;
	assert(isascii(test) == 0);
	assert(ft_isascii(test) == 0);
	fun_end(method_name);
}

void	test_ft_isprint(void)
{
	const char	*method_name = "test_ft_isprint";
	int			test;

	fun_start(method_name);
	test = 0;
	assert(isprint(test) == 0);
	assert(ft_isprint(test) == 0);
	test = 32;
	assert(isprint(test) > 0);
	assert(ft_isprint(test) > 0);
	test = 126;
	assert(isprint(test) > 0);
	assert(ft_isprint(test) > 0);
	test = 127;
	assert(isprint(test) == 0);
	assert(ft_isprint(test) == 0);
	fun_end(method_name);
}