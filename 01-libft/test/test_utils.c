#include <stdio.h>

void	fun_start(const char *method_name)
{
	printf("\n==== TEST: %s ====\n", method_name);
}

void	fun_end(const char *method_name)
{
	printf("\n==== OK: %s ====\n", method_name);
}

void	fun_test_header(int num)
{
	printf("\n=== Test %d:\n", num);
}
