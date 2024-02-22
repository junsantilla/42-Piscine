/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:30:57 by esantill          #+#    #+#             */
/*   Updated: 2024/02/02 19:31:23 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 5;
// 	y = 10;
// 	printf("Before swapping: x = %d, y = %d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("After swapping: x = %d, y = %d\n", x, y);
// 	return (0);
// }
