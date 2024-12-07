#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "../libft.h"
#include <assert.h>
#include <stdlib.h>

static void	fun_start(const char* method_name)
{
	printf("\n==== TEST: %s ====\n", method_name);
}

static void	fun_end(const char *method_name)
{
	printf("\n==== OK: %s ====\n", method_name);
}

void test_ft_isalpha(void)
{
	const char *method_name = "test_ft_isalpha";

	fun_start(method_name);
	printf("--- orig ---\n");
	printf("--- new ---\n");
	fun_end(method_name);
}

void test_ft_atoi(void)
{
	const char *method_name = "test_ft_atoi";
	const char  *nptr = "--45623a";

	fun_start(method_name);
	printf("--- orig ---\n");
	printf("%d\n", atoi(nptr));
	printf("--- new ---\n");
	// printf("%d\n", ft_atoi(nptr));
	fun_end(method_name);
}