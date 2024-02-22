/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:19:57 by esantill          #+#    #+#             */
/*   Updated: 2024/02/18 20:56:21 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	haystack[] = "Hello, World!";
// 	char	needle[] = "World";
// 	char	*result;

// 	result = ft_strstr(haystack, needle);
// 	if (result != NULL)
// 	{
// 		printf("Found at index: %ld\n", result - haystack);
// 	}
// 	else
// 	{
// 		printf("Substring not found\n");
// 	}
// 	return (0);
// }
