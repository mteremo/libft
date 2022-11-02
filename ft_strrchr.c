/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:11 by matavare          #+#    #+#             */
/*   Updated: 2022/11/02 16:16:53 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s) - 1;
	if (s[l + 1] == c)
		return ((char *)s + (l + 1));
	while (l >= 0)
	{
		if (s[l] == c)
			return ((char *)s + l);
		l--;
	}
	return (NULL);
}
