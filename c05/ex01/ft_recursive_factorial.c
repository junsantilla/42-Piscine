/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:08:31 by esantill          #+#    #+#             */
/*   Updated: 2024/02/20 15:50:50 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

// int main (void)
// {
//     int nb = 5;
//     int result = ft_recursive_factorial(nb);

//     printf("%d\n", result);

//     return (0);
// }