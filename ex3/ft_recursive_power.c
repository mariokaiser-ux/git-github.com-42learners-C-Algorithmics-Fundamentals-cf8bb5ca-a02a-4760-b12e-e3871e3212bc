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

/*int main(void)
{
    int ergebnis;
    ergebnis = ft_recursive_power(3, 5);
    printf("%d\n", ergebnis);
    return(0);
}*/
