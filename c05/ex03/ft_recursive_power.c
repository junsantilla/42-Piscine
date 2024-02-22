/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:00:25 by esantill          #+#    #+#             */
/*   Updated: 2024/02/19 11:31:47 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

// int	main(void)
// {
// 	int nb = 5;
// 	int power = 3;
// 	int result = ft_recursive_power(nb, power);

// 	printf("%d\n", result);

// 	return (0);
// }
