#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "../libft.h"
#include <assert.h>

void	test_ft_test(void)
{
	const char	*method_name = "test_ft_test";

	printf("==== TEST: %s ====\n", method_name);
	printf("--- orig ---\n");
	printf("--- new ---\n");
	printf("==== OK: %s ====\n\n", method_name);
}

void	test_ft_strnstr(void)
{
	const char	*method_name = "test_ft_strnstr";
	const char	*str = "Foo Bar Baz";
	const char	*find = "Bar";
	size_t		len = 4;
	char		*prt;

	printf("==== TEST: %s ====\n", method_name);
	printf("--- orig ---\n");
	// TODO - strnstr(str, find, len);
	printf("--- new ---\n");
	prt = ft_strnstr(str, find, len);
	printf("%s\n", prt);
	printf("==== OK: %s ====\n\n", method_name);
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
	printf("==== OK: %s ====\n\n", method_name);
}

void	test_ft_strlcat(void)
{
	const char	*method_name = "test_ft_strlcat";
	char		*dst = "ABCDE";
	const char	*src = "ADCDEF";

	printf("==== TEST: %s ====\n", method_name);
	printf("--- orig ---\n");
	printf("%lu: %s %s\n", strlcat(dst, src, 5), dst, src);
	// printf("%lu: %s %s\n",strlcat(dst, src, 7), dst, src);
	printf("--- new ---\n");
	printf("%lu: %s %s\n", ft_strlcat(dst, src, 5), dst, src);
	// printf("%lu: %s %s\n", ft_strlcat(dst, src, 7), dst, src);
	printf("==== OK: %s ====\n\n", method_name);
}

void	test_ft_strrchr(void)
{
	const char	*method_name = "test_ft_strrchr";
	const char	*s1 = "hola mundo";
	int			c = 97;

	printf("==== TEST: %s ====\n", method_name);
	printf("--- orig ---\n");
	printf("%s\n", strrchr(s1, c));
	printf("--- new ---\n");
	printf("%s\n", ft_strrchr(s1, c));
	printf("==== OK: %s ====\n\n", method_name);
}
