/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:08:41 by matavare          #+#    #+#             */
/*   Updated: 2022/11/07 16:46:20 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sublen;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	sub = (char *) malloc (sizeof(*s) * (slen + 1));
	sublen = 0;
	i = start;
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (sublen < len)
			sub[sublen] = s[i];
			sublen++;
			i++;
		}
	}
	sub[sublen] = '\0';
	return ((char *)sub);
}
