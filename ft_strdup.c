/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:01:06 by matavare          #+#    #+#             */
/*   Updated: 2022/12/08 14:07:52 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ss;
	char	*sd;
	size_t	l;
	size_t	i;

	i = 0;
	ss = (char *)s;
	l = ft_strlen(s);
	sd = (char *)malloc(sizeof(*s) * (l + 1));
	if (!sd)
		return (NULL);
	while (ss[i])
	{
		sd[i] = ss[i];
		i++;
	}
	sd[i] = '\0';
	return (sd);
}
