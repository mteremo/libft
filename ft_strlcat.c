/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:37:53 by matavare          #+#    #+#             */
/*   Updated: 2022/10/31 17:03:22 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dst[i])
		i++;
	while (src[l])
	{
		dst[i] = src[l];
		i++;
		l++;
	}
	dst[i] = '\0';
	return (i);
}
