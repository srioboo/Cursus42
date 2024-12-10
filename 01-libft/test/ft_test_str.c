#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "../libft.h"
#include <assert.h>

static void	fun_start(const char *method_name)
{
	printf("\n==== TEST: %s ====\n", method_name);
}

static void	fun_end(const char *method_name)
{
	printf("\n==== OK: %s ====\n", method_name);
}

void	test_ft_strlen(void)
{
	const char		*method_name = "test_ft_strlen";
	char			test[11] = "hola mundo";
	unsigned long	orig;
	unsigned long	new;

	orig = strlen(test);
	new = ft_strlen(test);
	fun_start(method_name);
	printf("--- orig: %s (%lu)\n", test, orig);
	printf("---  new: %s (%lu)\n", test, new);
	fun_end(method_name);
}

void	test_ft_strchr(void)
{
	const char		*method_name = "test_ft_strchr";
	int				letter = 't';
	// char			*str = "hola mundo\0";

	fun_start(method_name);
	printf("--- orig: %s\n", strchr("hola mundo\0", letter));
	printf("---  new: %s\n", ft_strchr("hola mundo\0", letter));
	printf("=== Test1 \n");
	printf("--- orig: %s\n", strchr("teste", 't'));
	printf("---  new: %s\n", ft_strchr("teste", 't'));
	printf("=== Test2 \n");
	printf("--- orig: %s\n", strchr("teste", 'e'));
	printf("---  new: %s\n", ft_strchr("teste", 'e'));
	printf("=== Test3 \n");
	printf("--- orig: %s\n", strchr("teste", '\0'));
	printf("---  new: %s\n", ft_strchr("teste", '\0'));
	fun_end(method_name);
}

void	test_ft_strlcpy(void)
{
	const char		*method_name = "test_ft_strlcpy";
	char			source[26] = "This is the source string";
	char			destination[35] = "And this is the destination string";
	size_t			size = 6;
	char			src[26] = "This is the source string";
	char			dst[35] = "And this is the destination string";

	fun_start(method_name);
	printf("--- orig: %zu -- %s (%zu)\n", strlcpy(destination, source, size), destination, strlen(destination));
	printf("---  new: %zu -- %s (%zu)\n", ft_strlcpy(dst, src, size), dst, ft_strlen(dst));
	printf("--- orig: %zu -- %s (%zu)\n", strlcpy(dst, "aaa", 0), dst, strlen(dst));
	printf("---  new: %zu -- %s (%zu)\n", ft_strlcpy(dst, "aaa", 0), dst, ft_strlen(dst));
	fun_end(method_name);
}

void	test_ft_strnstr(void)
{
	const char	*method_name = "test_ft_strnstr";
	const char	*str = "Foo Bar Baz";
	const char	*find = "Bar";
	const char	*find2 = "Baz";
	const char	*find3 = "";

	fun_start(method_name);
	printf("--- orig\n");
	// printf("%s\n", strnstr(str, find, 5));
	// printf("%s\n", strnstr(str, find, 11));
	// printf("%s\n", strnstr(str, find, 26));
	printf("--- new\n");
	printf("%s\n", ft_strnstr(str, find, 5));
	printf("%s\n", ft_strnstr(str, find, 11));
	printf("%s\n", ft_strnstr(str, find, 26));
	printf("--- orig test2\n");
	// printf("%s\n", strnstr(str, find2, 5));
	// printf("%s\n", strnstr(str, find2, 11));
	// printf("%s\n", strnstr(str, find2, 26));
	printf("--- new test2\n");
	printf("%s\n", ft_strnstr(str, find2, 5));
	printf("%s\n", ft_strnstr(str, find2, 11));
	printf("%s\n", ft_strnstr(str, find2, 26));
	printf("--- orig test3\n");
	// printf("%s\n", strnstr(str, find3, 5));
	printf("--- new test3\n");
	printf("%s\n", ft_strnstr(str, find3, 5));
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
	printf("%d ", ft_strncmp(s1, s4, 2));
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
