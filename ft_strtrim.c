/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:43:07 by matavare          #+#    #+#             */
/*   Updated: 2022/12/08 14:08:19 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

int	ft_isset(char const *set, int s1)
{
	size_t	f;

	f = 0;
	while (set[f])
	{
		if (set[f] == s1)
			return (1);
		else
			f++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;
	char	*new;

	i = 0;
	f = ft_strlen(s1) - 1;
	while (s1[i] && ft_isset(set, s1[i]) == 1)
		i++;
	while (s1[f] && ft_isset(set, s1[f]) == 1 && f > i)
		f--;
	new = (char *)malloc(sizeof(char) * (f - i + 2));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1 + i, f - i + 2);
	return (new);
}
