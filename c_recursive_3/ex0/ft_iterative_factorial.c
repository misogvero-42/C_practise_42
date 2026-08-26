#include <stdio.h>

int ft_iterative_factorial(int nb)

{
	int	result;
	
	result = 1;
				/*ovde ubaci if nb<0*/
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int main()

{
	printf("%d\n", ft_iterative_factorial(5));
	return(0);
}
