/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makaiser <makaiser@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 09:38:29 by makaiser          #+#    #+#             */
/*   Updated: 2026/09/08 11:13:40 by makaiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	ft_print_fibonacci(int n)
{
	int	t1;
	int	t2;
	int	next_term;
	int	i;

	t1 = 0;
	t2 = 1;
	i = 1;
	write(1, "Fibonacci-Folge: ", 17);
	while (i <= n)
	{
		ft_putnbr(t1);
		write(1, " ", 1);
		next_term = t1 + t2;
		t1 = t2;
		t2 = next_term;
		i++;
	}
	ft_putchar('\n');
}

/*int	main(void)
{
	ft_print_fibonacci(20);
	return (0);
}*/
