/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:09:44 by matavare          #+#    #+#             */
/*   Updated: 2022/12/08 14:07:57 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	unsigned int	len_new;
	unsigned int	i;
	unsigned int	f;

	len_new = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len_new + 1));
	f = 0;
	if (!new)
		return (NULL);
	if (s1 || s2)
	{
		ft_memcpy(new, s1, ft_strlen(s1));
		i = ft_strlen(s1);
		while ((char)s2[f])
		{
			new[i] = (char)s2[f];
			i++;
			f++;
		}
		new[i] = '\0';
	}
	return (new);
}
