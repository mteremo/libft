/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:12:12 by matavare          #+#    #+#             */
/*   Updated: 2022/11/10 16:45:35 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**countwd(char const *s, char c)
{
	int		i;
	int		counter;
	char	**str;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			counter++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	printf("counter: %d\n", counter);
	str = (char **)malloc(sizeof(char *) * (counter + 1));
	if (!str)
		return (NULL);
	str[counter] = 0;
	return (str);
}

int	wdlen(char const *s, int i, char c)
{
	int		end;

	end = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
		end++;
	}
	printf("nb: %d", end);
	return (end);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	str = countwd(s, c);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		str[nb] = (char *)ft_calloc((wdlen(s, i, c) + 1), sizeof(char));
		if (!str[nb])
			return (NULL);
		ft_memmove(str[nb], s + i, wdlen(s, i, c));
		nb++;
		i++;
	}
	return (str);
}

int	main(void)
{
	//int		word;
	//char	**array;

	wdlen("this is my string a", 5, ' ');
	//countwd("this is my string a", ' ');
	/* array = ft_split(" OLa teresa ..olola  b", ' ');
	word = 0;
	while (word <= 4)
	{
		printf("[%d]: %s\n", word, array[word]);
		word++;
	} */
}