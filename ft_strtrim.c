/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:43:07 by matavare          #+#    #+#             */
/*   Updated: 2022/11/08 17:07:20 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	f;
	unsigned int	n;
	char			*new;

	len = ft_strlen(s1) - (2 * ft_strlen(set));
	new = (char *)malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	if 
	i = 0;
	f = 0;
	n = 0;
	while (s1[i])
	{
		while (set[f])
			if (s1[i] != set[f])
		{
			new[n] = s1[i];
			n++;
			i++;
		}
		else
		{
			i++;
			f++;
		}
	}
	return (new);
}
