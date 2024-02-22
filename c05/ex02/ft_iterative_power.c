/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:19:19 by esantill          #+#    #+#             */
/*   Updated: 2024/02/20 18:18:46 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	i = 1;
	result = 1;
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	int nb = 5;
// 	int power = 4;
// 	int result = ft_iterative_power(nb, power);

// 	printf("%d\n", result);

// 	return (0);
// }
