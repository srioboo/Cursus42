#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int 	*pa;
	int	*pb;

	a = 22;
	b = 44;
	pa = &a;
	pb = &b;

	printf("a=%d b=%d pa=%p pb=%p \n", a, b, pa, pb);
	ft_swap(pa, pb);
	printf("a=%d b=%d &a=%p &b=%p \n", a, b, &a, &b);
	return (0);
}