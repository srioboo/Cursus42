#include "../libft.h"
#include "testlib.h"

static void	test_ft_atoi_long(void)
{
	printf("\n=== test: '%s'\n", "2147483647");
	printf("--- orig: %d\n", atoi("2147483647"));
	printf("---  new: %d\n", ft_atoi("2147483647"));
	printf("\n=== test: '%s'\n", "-2147483647");
	printf("--- orig: %d\n", atoi("-2147483647"));
	printf("---  new: %d\n", ft_atoi("-2147483647"));
}

static void	test_ft_atoi_sign(void)
{
	printf("\n=== test: '%s'\n", "--123");
	printf("--- orig: %d\n", atoi("--123"));
	printf("---  new: %d\n", ft_atoi("--123"));
	printf("\n=== test: '%s'\n", "-+123");
	printf("--- orig: %d\n", atoi("-+123"));
	printf("---  new: %d\n", ft_atoi("-+123"));
	printf("\n=== test: '%s'\n", "+-123");
	printf("--- orig: %d\n", atoi("+-123"));
	printf("---  new: %d\n", ft_atoi("+-123"));
	printf("\n=== test: '%s'\n", "++123");
	printf("--- orig: %d\n", atoi("++123"));
	printf("---  new: %d\n", ft_atoi("++123"));
}

static void	test_ft_atoi_chars(void)
{
	printf("\n=== test: '%s'\n", "    123");
	printf("--- orig: %d\n", atoi("    123"));
	printf("---  new: %d\n", ft_atoi("    123"));
	printf("\n=== test: '%s'\n", " \t\v\n\r\f123");
	printf("--- orig: %d\n", atoi(" \t\v\n\r\f123"));
	printf("---  new: %d\n", ft_atoi(" \t\v\n\r\f123"));
	printf("\n=== test: '%s'\n", "");
	printf("--- orig: %d\n", atoi(""));
	printf("---  new: %d\n", ft_atoi(""));
}

void	test_ft_atoi(void)
{
	const char	*method_name = "test_ft_atoi";

	fun_start(method_name);
	test_ft_atoi_long();
	test_ft_atoi_sign();
	test_ft_atoi_chars();
	printf("\n=== test: '%s'\n", "\001 3");
	printf("--- orig: %d\n", atoi("\001 3"));
	printf("---  new: %d\n", ft_atoi("\001 3"));
	printf("\n=== test: '%s'\n", "\037 32");
	printf("--- orig: %d\n", atoi("\037 32"));
	printf("---  new: %d\n", ft_atoi("\037 32"));
	fun_end(method_name);
}

//// Error in test 6: atoi("--123"): expected: 0, yours: 123
//// Error in test 7: atoi("-+123"): expected: 0, yours: -123
//// Error in test 8: atoi("+-123"): expected: 0, yours: -123
//// Error in test 9: atoi("++123"): expected: 0, yours: 123

// Error in test 19: atoi("\001 2"): expected: 0, yours: 2
// Error in test 20: atoi("\002 3"): expected: 0, yours: 3
// Error in test 21: atoi("\003 4"): expected: 0, yours: 4
// Error in test 22: atoi("\004 5"): expected: 0, yours: 5