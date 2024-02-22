/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:18:39 by esantill          #+#    #+#             */
/*   Updated: 2024/02/07 17:18:41 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[i] != '\0' && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < size)
		dest[dest_len + i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (dest_len + i);
}

// int	main(void)
// {
// 	char			destination[20] = "Hello, ";
// 	const char		source[] = "world!";
// 	unsigned int	result;

// 	result = ft_strlcat(destination, source, sizeof(destination));
// 	printf("Result: %u\n", result);
// 	printf("Concatenated String: %s\n", destination);
// 	return (0);
// }

// dent: 		Hello world
// src:			world
// size: 		5
