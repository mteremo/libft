/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:14:49 by matavare          #+#    #+#             */
/*   Updated: 2022/12/08 19:10:52 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	t;

	if (size != 0)
	{
		t = nmemb * size;
		{
			if (nmemb != t / size)
				return (NULL);
		}	
	}	
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
