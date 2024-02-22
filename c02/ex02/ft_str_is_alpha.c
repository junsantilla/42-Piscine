/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantill <esantill@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:20:54 by esantill          #+#    #+#             */
/*   Updated: 2024/02/05 12:21:05 by esantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_the_char(char c)
{
	if ((c >= 'a') && (c <= 'z') )
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!check_the_char(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
//     char input[] = "HelloGeek"; 

//     if (ft_str_is_alpha(input))
//     {
//         printf("Contains only alphabetic characters.\n", input);
//     }
//     else
//     {
//         printf("Contains non-alphabetic characters.\n", input);
//     }

//     return 0;
// }
