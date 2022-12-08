/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:37:53 by matavare          #+#    #+#             */
/*   Updated: 2022/12/08 14:08:01 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			ls;
	size_t			ld;
	unsigned char	*s;

	i = 0;
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	s = (unsigned char *)src;
	if (!size)
		return (ls);
	else if (ld >= size)
		return (ls + size);
	while (s[i] && (i + ld + 1) < size)
	{
		dst[ld + i] = s[i];
		i++;
	}
	dst[ld + i] = '\0';
	return (ls + ld);
}
