/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:35:01 by matavare          #+#    #+#             */
/*   Updated: 2022/11/10 15:54:58 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwd(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == c)
			counter++;
		while (s[i] == c)
			i++;
	}
	if (s[i - 1] != c)
		counter++;
	return (counter);
}

int	nextc(char const *s, char c, int i)
{
	int	f;

	f = 0;
	while (s[i + f])
	{
		if (s[i + f] == c)
			return (f);
		f++;
	}
	return (f);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		ii;
	int		m;
	int		count;

	i = 0;
	m = 0;
	count = countwd(s, c);
	//printf("%d\n", count);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = 0;
	while (i < count)
	{
		str[i] = (char *)malloc(sizeof(char) * (nextc(s, c, m) + 1));
		if (!str[i])
			return (NULL);
		i++;
	}
	i = 0;
	while (i < count)
	{
		while (nextc(s, c, m) == 0)
			m++;
		ii = 0;
		while (nextc(s, c, m) != 0)
		{
			str[i][ii] = s[m];
			ii++;
			m++;
		}
		str[i][ii] = '\0';
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	int		word;
	char	**array;

	array = ft_split(" OLa teresa ..olola  b", ' ');
	word = 0;
	while (word <= 4)
	{
		printf("[%d]: %s\n", word, array[word]);
		word++;
	}
} */