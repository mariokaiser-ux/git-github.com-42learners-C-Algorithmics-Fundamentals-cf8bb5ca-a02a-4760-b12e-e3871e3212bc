/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makaiser <makaiser@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:02:50 by makaiser          #+#    #+#             */
/*   Updated: 2026/09/08 11:22:58 by makaiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("2 hoch 3  = %d (Erwartet: 8)\n", ft_iterative_power(2, 3));
	printf("5 hoch 0  = %d (Erwartet: 1)\n", ft_iterative_power(5, 0));
	printf("0 hoch 0  = %d (Erwartet: 1)\n", ft_iterative_power(0, 0));
	printf("3 hoch 4  = %d (Erwartet: 81)\n", ft_iterative_power(3, 4));
	printf("5 hoch -2 = %d (Erwartet: 0)\n", ft_iterative_power(5, -2));
	printf("-2 hoch 3 = %d (Erwartet: -8)\n", ft_iterative_power(-2, 3));
	printf("5 hoch 5  = %d (Erwartet: 3125)\n", ft_iterative_power(5, 5));
	return (0);
}
