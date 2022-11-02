/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:37:53 by matavare          #+#    #+#             */
/*   Updated: 2022/11/01 18:29:11 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	ls;
	int	ld;

	i = 0;
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	if (!size) //o q significa !size
		return (ld + size);
	while (src[i] && ((size - ld - 1) >= ls))
	{
		dst[ld + i] = src[i];
		i++;
	}
	if (ld + i < size)
		dst[ld + i] = '\0';
	return (ld + ls);
}
