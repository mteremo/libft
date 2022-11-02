/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:31:17 by matavare          #+#    #+#             */
/*   Updated: 2022/11/02 11:50:01 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *string, const char *substring, size_t len)
{
	size_t	i;
	size_t	f;

	i = 0;
	f = 0;
	if (!substring[i])
		return ((char *)string);
	while (string[i + f] && f <= len)
	{
		if (string[i + f] != substring[i])
		{
			i = 0;
			f++;
		}
		if (string[i + f] == substring[i])
		{
			i++;
			if (substring[i] == '\0')
				return ((char *)string + f);
		}
	}
	return (NULL);
}
