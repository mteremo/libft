/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:00:14 by matavare          #+#    #+#             */
/*   Updated: 2022/12/08 14:46:31 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**wdcount(char const *s, char c)
{
	int		counter;
	int		i;
	char	**str;

	counter = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	str = (char **)ft_calloc((counter + 1), sizeof(char *));
	return (str);
}

char	*wdlenalloc(char const *s, char c, int wdi)
{
	int		start;
	int		len;
	char	*str;

	len = 0;
	start = wdi;
	while (s[wdi] != c && s[wdi] != '\0')
		wdi++;
	len = wdi - start;
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		wdi;
	int		i;

	str = wdcount(s, c);
	if (!str)
		return (NULL);
	wdi = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			str[wdi] = wdlenalloc(s, c, i);
		while (s[i] != c && s[i] != '\0')
			i++;
		wdi++;
	}
	return (str);
}
