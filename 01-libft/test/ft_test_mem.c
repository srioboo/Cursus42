#include "../libft.h"
#include "testlib.h"
#include <bsd/string.h>

void	test_ft_memmove(void)
{
	const char	*method_name = "test_ft_memmove";
	void		*dest0[10];
	void		*dest1[10];

	fun_start(method_name);
	fun_test_header(0);
	printf("--- orig: %p - %s\n", memmove(dest0, "123456", 4), (char *)(dest0));
	printf("---  new: %p - %s\n", ft_memmove(dest1, "123456", 4), (char *)(dest1));
	fun_test_header(1);
	printf("--- orig: %p - %s\n", memmove(dest0, "12345678901", 4), (char *)(dest0));
	printf("---  new: %p - %s\n", ft_memmove(dest1, "12345678901", 4), (char *)(dest1));
	fun_end(method_name);
}

void	test_ft_memcpy(void)
{
	const char *method_name = "test_ft_memcpy";
	void *dest0[10];
	void *dest1[10];

	fun_start(method_name);
	fun_test_header(0);
	printf("--- orig: %p - %s\n", memcpy(dest0, "123456", 4), (char *)(dest0));
	printf("---  new: %p - %s\n", ft_memcpy(dest1, "123456", 4), (char *)(dest1));
	fun_test_header(1);
	printf("--- orig: %p - %s\n", memcpy(dest0, "12345678901", 4), (char *)(dest0));
	printf("---  new: %p - %s\n", ft_memcpy(dest1, "12345678901", 4), (char *)(dest1));
	fun_end(method_name);
}

void	test_ft_bzero(void)
{
	const char	*method_name = "test_ft_bzero";
	void		*ptr[10];
	char		*test;

	test = (char *)ptr;
	fun_start(method_name);
	printf("--- orig :\n");
	bzero(ptr, 10);
	printf("---  new :\n");
	ft_bzero(ptr, 10);
	printf("%s", test);
	fun_end(method_name);
}

int	test_ft_memset(void)
{
	const char	*method_name = "test_ft_memset";

	fun_start(method_name);
	fun_end(method_name);
	return (0);
}
