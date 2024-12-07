#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "../libft.h"
#include <assert.h>

void	test_ft_test(void)
{
	const char	*method_name = "test_ft_strnstr";

	printf("==== TEST: %s ====\n", method_name);
	printf("--- orig ---\n");
	printf("--- new ---\n");
	printf("==== OK: %s ====\n", method_name);
}

void	test_ft_strnstr(void)
{
	const char	*method_name = "test_ft_strnstr";
	const char	*str = "Esta es la cadena a testear";
	const char	*find = "la cadena";
	char		*prt;

	printf("==== TEST: %s ====\n", method_name);
	printf("--- orig ---\n");
	// prt = strnstr(str, find, 3);
	// printf("%s\n", prt);
	printf("--- new ---\n");
	prt = ft_strnstr(str, find, 3);
	printf("%s\n", prt);
	printf("==== OK: %s ====\n", method_name);
}

void	test_ft_strncmp(void)
{
	const char	*method_name = "test_ft_strncmp";
	const char	*s1 = "ABCDE";
	const char	*s2 = "ABBDE";
	const char	*s3 = "AB";
	const char	*s4 = "ABCDZ";

	printf("==== TEST: %s ====\n", method_name);
	printf("--- orig ---\n");
	printf("%d\n", strncmp(s1, s2, 6));
	printf("%d\n", strncmp(s1, s3, 6));
	printf("%d\n", strncmp(s1, s4, 6));
	printf("%d\n", strncmp(s1, s4, 2));
	printf("--- new ---\n");
	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", ft_strncmp(s1, s3, 6));
	printf("%d\n", ft_strncmp(s1, s4, 6));
	printf("%d\n", ft_strncmp(s1, s4, 2));
	printf("==== OK: %s ====\n", method_name);
}
