/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makaiser <makaiser@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 07:52:55 by makaiser          #+#    #+#             */
/*   Updated: 2026/09/08 13:30:47 by makaiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	printf("2 hoch 3  = %d (Erwartet: 8)\n", ft_recursive_power(2, 3));
	printf("5 hoch 0  = %d (Erwartet: 1)\n", ft_recursive_power(5, 0));
	printf("3 hoch 4  = %d (Erwartet: 81)\n", ft_recursive_power(3, 4));
	printf("0 hoch 5  = %d (Erwartet: 0)\n", ft_recursive_power(0, 5));
	printf("2 hoch -2 = %d (Erwartet: 0)\n", ft_recursive_power(2, -2));
	return (0);
}*/