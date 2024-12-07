#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "../libft.h"
#include <assert.h>

static void fun_start(const char *method_name)
{
	printf("\n==== TEST: %s ====\n", method_name);
}

static void fun_end(const char *method_name)
{
	printf("\n==== OK: %s ====\n", method_name);
}

void	test_ft_strnstr(void)
{
	const char	*method_name = "test_ft_strnstr";
	const char	*str = "Foo Bar Baz";
	const char	*find = "Bar";
	size_t		len = 4;
	char		*prt;

	fun_start(method_name);
	printf("--- orig ---\n");
	// TODO - strnstr(str, find, len);
	printf("\n--- new ---\n");
	prt = ft_strnstr(str, find, len);
	printf("%s", prt);
	fun_end(method_name);
}

void	test_ft_strncmp(void)
{
	const char	*method_name = "test_ft_strncmp";
	const char	*s1 = "ABCDE";
	const char	*s2 = "ABBDE";
	const char	*s3 = "AB";
	const char	*s4 = "ABCDZ";

	fun_start(method_name);
	printf("--- orig ---\n");
	printf("%d, ", strncmp(s1, s2, 6));
	printf("%d, ", strncmp(s1, s3, 6));
	printf("%d, ", strncmp(s1, s4, 6));
	printf("%d", strncmp(s1, s4, 2));
	printf("\n--- new ---\n");
	printf("%d, ", ft_strncmp(s1, s2, 6));
	printf("%d, ", ft_strncmp(s1, s3, 6));
	printf("%d, ", ft_strncmp(s1, s4, 6));
	printf("%d", ft_strncmp(s1, s4, 2));
	fun_end(method_name);
}

void	test_ft_strlcat(void)
{
	const char	*method_name = "test_ft_strlcat";
	char		*dst = "ABCDE";
	const char	*src = "ADCDEF";

	fun_start(method_name);
	printf("--- orig ---\n");
	printf("%lu: %s %s", strlcat(dst, src, 5), dst, src);
	// printf("%lu: %s %s\n",strlcat(dst, src, 7), dst, src);
	printf("\n--- new ---\n");
	printf("%lu: %s %s", ft_strlcat(dst, src, 5), dst, src);
	// printf("%lu: %s %s\n", ft_strlcat(dst, src, 7), dst, src);
	fun_end(method_name);
}

void	test_ft_strrchr(void)
{
	const char	*method_name = "test_ft_strrchr";
	const char	*s1 = "hola mundo";
	int			c = 97;

	fun_start(method_name);
	printf("--- orig ---\n");
	printf("%s", strrchr(s1, c));
	printf("\n--- new ---\n");
	printf("%s", ft_strrchr(s1, c));
	fun_end(method_name);
}
