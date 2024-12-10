#include "../libft.h"
#include "testlib.h"
#include <ctype.h>

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
