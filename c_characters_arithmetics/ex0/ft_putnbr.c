/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgvero <mgvero@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 10:54:39 by mgvero            #+#    #+#             */
/*   Updated: 2026/08/23 11:22:27 by mgvero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)

{
	long int	n;
	n = nb;
	if (n < 0)	
	{
		ft_putchar('-');
		n = n * -1;
	}

	{
	if (n <= 9)
		ft_putchar(n + '0');

	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	}
}
