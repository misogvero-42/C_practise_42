/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgvero <mgvero@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:39:31 by mgvero            #+#    #+#             */
/*   Updated: 2026/08/24 18:55:59 by mgvero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

int	ft_is_it_last(int a, int b, int c)

{
	if (a == 7)
	{
		if (b == 8)
		{
			if (c == 9)
			{
				write(1, "\n", 1);
				return (1);
			}
		}
	}
	write(1, ", ", 2);
	return (0);
}

void	ft_print_abc(int a, int b, int c)

{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
}

void	ft_print_comb(void)

{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_abc(a, b, c);
				if (ft_is_it_last(a, b, c))
					return ;
				c++;
			}
			b++;
		}
		a++;
	}
}
