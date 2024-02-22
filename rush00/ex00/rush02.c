/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:04:35 by esantill          #+#    #+#             */
/*   Updated: 2024/02/03 11:04:37 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, int left, int middle, int right)
{
	int	space;

	space = 1;
	if (x > 0)
	{
		ft_putchar(left);
	}
	while (space < (x - 1))
	{
		ft_putchar(middle);
		space++;
	}
	if (x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	space;

	space = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, 'A', 'B', 'A');
	}
	while (space < y - 1 && x > 0)
	{
		print_line(x, 'B', ' ', 'B');
		space++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, 'C', 'B', 'C');
	}
}
