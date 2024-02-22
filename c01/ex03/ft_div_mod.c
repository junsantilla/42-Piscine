/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:59:02 by esantill          #+#    #+#             */
/*   Updated: 2024/02/03 15:59:08 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 0;
// 	y = 0;
// 	ft_div_mod(10, 4, &x, &y);
// 	printf("a: %d. b: %d. div: %d. mod: %d.\n", 10, 4, x, y);
// 	return (0);
// }
