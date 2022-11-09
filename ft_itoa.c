/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:44:02 by matavare          #+#    #+#             */
/*   Updated: 2022/11/09 18:08:15 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	countint(int n)
{
	int	l;

	l = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		l += 1;
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long int	ln;
	char		*str;

	len = countint(n);
	ln = n;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (ln == 0)
		str[0] = '0';
	str[len] = '\0';
	if (ln < 0)
	{
		str[0] = '-';
		ln = -ln;
	}
	while (ln > 0)
	{
		str[len - 1] = ln % 10 + '0';
		ln = ln / 10;
		len--;
	}
	return (str);
}
