/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makaiser <makaiser@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 08:21:19 by makaiser          #+#    #+#             */
/*   Updated: 2026/09/08 07:55:07 by makaiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*int	main(void)
{
	printf("Fakultät von 5: %d \n", ft_iterative_factorial(5));
	printf("Fakultät von 0: %d \n", ft_iterative_factorial(0));
	printf("Fakultät von -3: %d \n", ft_iterative_factorial(-3));
	printf("Fakultät von 4: %d \n", ft_iterative_factorial(4));
	return (0);
}*/
