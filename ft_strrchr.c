/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:11 by matavare          #+#    #+#             */
/*   Updated: 2022/12/08 14:08:16 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s) - 1;
	if (s[l + 1] == (unsigned char)c)
		return ((char *)s + (l + 1));
	while (l >= 0)
	{
		if (s[l] == (unsigned char)c)
			return ((char *)s + l);
		l--;
	}
	return (NULL);
}
