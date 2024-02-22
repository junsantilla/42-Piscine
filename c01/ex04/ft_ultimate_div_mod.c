/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:14:26 by esantill          #+#    #+#             */
/*   Updated: 2024/02/03 17:14:30 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 20;
// 	y = 8;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("a: %d. b: %d.\n", x, y);
// 	return (0);
// }
