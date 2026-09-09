/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makaiser <makaiser@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:18:29 by makaiser          #+#    #+#             */
/*   Updated: 2026/09/08 07:56:14 by makaiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	printf("Fakultät von 5: %d (Erwartet: 120)\n", ft_recursive_factorial(5));
	printf("Fakultät von 0: %d (Erwartet: 1)\n", ft_recursive_factorial(0));
	printf("Fakultät von 1: %d (Erwartet: 1)\n", ft_recursive_factorial(1));
	printf("Fakultät von -5: %d (Erwartet: 0)\n", ft_recursive_factorial(-5));
	printf("Fakultaet von 4: %d (Erwartet: 24)\n", ft_recursive_factorial(4));
	return (0);
}*/
