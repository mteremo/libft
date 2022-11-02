/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:15:37 by matavare          #+#    #+#             */
/*   Updated: 2022/11/02 17:26:44 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	t = NULL;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		t[i] = s[i];
		d[i] = t[i];
		i++;
	}
	return (dest);
}
