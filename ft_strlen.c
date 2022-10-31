/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:43:29 by matavare          #+#    #+#             */
/*   Updated: 2022/10/31 16:59:17 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
/*
int main()
{
	char	str[] = "Dammm, u look great!";
	char	str1[] = " ";
	char	str2[] = "";

	printf("FT: %ld, Real: %ld\n", ft_strlen(str), strlen(str));
	printf("FT: %ld, Real: %ld\n", ft_strlen(str1), strlen(str1));
	printf("FT: %ld, Real: %ld\n", ft_strlen(str2), strlen(str2));
}*/