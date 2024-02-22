/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:50:47 by esantill          #+#    #+#             */
/*   Updated: 2024/02/20 18:18:28 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1 || nb < 0)
	{
		return (0);
	}
	i = 2;
	while (i <= nb - 1)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}

// int main()
// {
//     int result;

//     result = ft_find_next_prime(18);

//     printf("%d", result);

//     return (0);
// }
