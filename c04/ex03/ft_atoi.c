/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:28:45 by esantill          #+#    #+#             */
/*   Updated: 2024/02/14 14:55:53 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r')) 
	{
		str++;
	}
	sign = 1;
	while (*str == '+' || *str == '-') 
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// int	main(int argc, char *argv[])
// {
// 	int	result;
//
// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	result = ft_atoi(argv[1]);
// 	printf("%d\n", result);
// 	return (0);
// }
