/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:03:40 by matavare          #+#    #+#             */
/*   Updated: 2022/11/04 16:07:40 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  l1;
    size_t  l2;
    size_t  i;
    unsigned char   *st1;
    unsigned char   *st2;

    l1 = ft_strlen(s1);
    l2 = ft_strlen(s2);
    if (l1 == n && l2 == n)
    {
        while (st1[i])
        {
            if (st1[i] != st2[i])
                return (st1[i] - st2[i]);
            else
                i++; 
        }
        return (st1[i] - st2[i]);
    }
}
