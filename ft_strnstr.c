/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:31:17 by matavare          #+#    #+#             */
/*   Updated: 2022/11/07 12:13:29 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *substring, size_t len)
{
	size_t			i;
	size_t			f;
	unsigned char	*s;
	unsigned char	*sub;

	i = 0;
	f = 0;
	s = (unsigned char *)string;
	sub = (unsigned char *)substring;
	if (!sub[i])
		return ((char *)s);
	while (s[i + f])
	{
		i = 0;
		while ((i + f) < len && s[i + f] == sub[i])
		{
			if (!s[i + f] && !sub[i])
				return ((char *)s + f);
			i++;
		}
		if (sub[i] == '\0')
			return ((char *)s + f);
		f++;
	}
	return (0);
}
