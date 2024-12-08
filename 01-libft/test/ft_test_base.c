#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "../libft.h"
#include <assert.h>
#include <stdlib.h>
#include <limits.h>

static void	fun_start(const char *method_name)
{
	printf("\n==== TEST: %s ====\n", method_name);
}

static void	fun_end(const char *method_name)
{
	printf("\n==== OK: %s ====\n", method_name);
}

void	test_ft_isalpha(void)
{
	const char	*method_name = "test_ft_isalpha";

	fun_start(method_name);
	printf("--- orig ---\n");
	printf("--- new ---\n");
	fun_end(method_name);
}

void	test_ft_atoi(void)
{
	const char	*method_name = "test_ft_atoi";
	const char	*nptr = "-4562a4";
	const char	*nptrb = "+567";
	const char	*nptrc = "  +-567";
	const char	*nptrd = "2147483647";
	const char	*nptre = "-2147483647";

	fun_start(method_name);
	printf("--- test: '%s'\n", nptr);
	printf("--- orig ---\n");
	printf("%d\n", atoi(nptr));
	printf("--- new ---\n");
	printf("%d\n", ft_atoi(nptr));
	printf("--- test: '%s'\n", nptrb);
	printf("--- orig ---\n");
	printf("%d\n", atoi(nptrb));
	printf("--- new ---\n");
	printf("%d\n", ft_atoi(nptrb));
	printf("--- test: '%s'\n", nptrc);
	printf("--- orig ---\n");
	printf("%d\n", atoi(nptrb));
	printf("--- new ---\n");
	printf("%d\n", ft_atoi(nptrb));
	printf("--- test: '%s'\n", nptrd);
	printf("--- orig ---\n");
	printf("%d\n", atoi(nptrd));
	printf("--- new ---\n");
	printf("%d\n", ft_atoi(nptrd));
	printf("--- test: '%s'\n", nptre);
	printf("--- orig ---\n");
	printf("%d\n", atoi(nptre));
	printf("--- new ---\n");
	printf("%d\n", ft_atoi(nptre));
	fun_end(method_name);
}
