#include "../libft.h"
#include "testlib.h"
#include <bsd/string.h>
#include <string.h>

void	test_ft_strlen(void)
{
	const char		*method_name = "test_ft_strlen";

	fun_start(method_name);
	printf("--- orig: %s (%lu)\n", "hola mundo", strlen("hola mundo"));
	printf("---  new: %s (%lu)\n", "hola mundo", ft_strlen("hola mundo"));
	fun_end(method_name);
}

void	test_ft_strchr(void)
{
	const char		*method_name = "test_ft_strchr";

	fun_start(method_name);
	// printf("--- orig: %s\n", strchr("hola mundo", 't'));
	printf("---  new: %s\n", ft_strchr("hola mundo", 't'));
	fun_test_header(1);
	printf("--- orig: %s\n", strchr("teste", 't'));
	printf("---  new: %s\n", ft_strchr("teste", 't'));
	fun_test_header(2);
	printf("--- orig: %s\n", strchr("teste", 'e'));
	printf("---  new: %s\n", ft_strchr("teste", 'e'));
	fun_test_header(3);
	printf("--- orig: %s\n", strchr("teste", '\0'));
	printf("---  new: %s\n", ft_strchr("teste", '\0'));
	fun_end(method_name);
}

void	test_ft_strlcpy(void)
{
	const char		*method_name = "test_ft_strlcpy";
	size_t			size;
	char			src[26] = "This is the source string";
	char			dst[35] = "And this is the destination string";

	size = 6;
	fun_start(method_name);
	printf("--- orig: %zu -- %s (%zu)\n", strlcpy(dst, src, size),
		dst, strlen(dst));
	printf("---  new: %zu -- %s (%zu)\n", ft_strlcpy(dst, src, size),
		dst, ft_strlen(dst));
	printf("--- orig: %zu -- %s (%zu)\n", strlcpy(dst, "aaa", 0),
		dst, strlen(dst));
	printf("---  new: %zu -- %s (%zu)\n", ft_strlcpy(dst, "aaa", 0),
		dst, ft_strlen(dst));
	fun_end(method_name);
}

void	test_ft_strnstr(void)
{
	const char	*method_name = "test_ft_strnstr";
	const char	*str = "Foo Bar Baz";

	fun_start(method_name);
	printf("--- orig\n");
	// printf("%s\n", strnstr(str, "Bar", 5));
	// printf("%s\n", strnstr(str, "Bar", 11));
	// printf("%s\n", strnstr(str, "Bar", 26));
	printf("--- new\n");
	printf("%s\n", ft_strnstr(str, "Bar", 5));
	printf("%s\n", ft_strnstr(str, "Bar", 11));
	printf("%s\n", ft_strnstr(str, "Bar", 26));
	printf("--- orig test2\n");
	// printf("%s\n", strnstr(str, "Baz", 5));
	// printf("%s\n", strnstr(str, "Baz", 11));
	// printf("%s\n", strnstr(str, "Baz", 26));
	printf("--- new test2\n");
	printf("%s\n", ft_strnstr(str, "Baz", 5));
	printf("%s\n", ft_strnstr(str, "Baz", 11));
	printf("%s\n", ft_strnstr(str, "Baz", 26));
	printf("--- orig test3\n");
	// printf("%s\n", strnstr(str, "", 5));
	printf("--- new test3\n");
	printf("%s\n", ft_strnstr(str, "", 5));
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

	fun_start(method_name);
	printf("--- orig: %lu: %s %s\n", strlcat("ABCDE", "ADCDEF", 5), "ABCDE", "ADCDEF");
	// printf("%lu: %s %s\n",strlcat("ABCDE", "ADCDEF", 7), "ABCDE", "ADCDEF");
	printf("---  new: %lu: %s %s\n", ft_strlcat("ABCDE", "ADCDEF", 5), "ABCDE", "ADCDEF");
	// printf("%lu: %s %s\n", ft_strlcat("ABCDE", src, 7), "ABCDE", src);
	fun_end(method_name);
}

void	test_ft_strrchr(void)
{
	const char	*method_name = "test_ft_strrchr";

	fun_start(method_name);
	printf("--- orig ---\n");
	printf("%s", strrchr("hola mundo", 97));
	printf("\n--- new ---\n");
	printf("%s", ft_strrchr("hola mundo", 97));
	fun_end(method_name);
}
