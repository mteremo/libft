/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:37:53 by matavare          #+#    #+#             */
/*   Updated: 2022/11/02 15:35:31 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ls;
	size_t	ld;

	i = 0;
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	if (!size)
		return (ld + size);
	while (src[i] && i + ld < size - 1)
	{
		dst[ld + i] = src[i];
		i++;
	}
	if (i + ld < size)
		dst[ld + i] = '\0';
	return (ld + ls);
}
