/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:29:54 by esantill          #+#    #+#             */
/*   Updated: 2024/02/19 20:18:35 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	val;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	else
	{
		val = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (val);
	}
}

// int main() {
//     int index = 0;

//     while (index <= 5) {
//         printf("%d", ft_fibonacci(index));

//         if (index < 5) {
//             printf(", ");
//         }

//         index++;
//     }

//     return (0);
// }
