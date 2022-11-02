/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:31:17 by matavare          #+#    #+#             */
/*   Updated: 2022/11/01 19:53:50 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char    *ft_strnstr(const char *string, const char *substring, size_t len)
{
    size_t i;
    size_t f;

    i = 0;
    f = 0;
    if (!substring[i])
        return ((char *)string);
    while (string[i + f] && f <= len)
    {
        if (string[i + f] != substring[i])
        {    
            i = 0;
            f++;
        }    
        if (string[i + f] == substring[i])
        {
            i++;
            if (substring[i] == '\0')
                return ((char *)string + f);
        } 
    }
    return (NULL);
}
/*
int main()
{
    char    s[] = "ola eu sou a teresa mota";
    char    sub[] = "teresa";
    char    sub1[] = "";
    char    sub2[] = " ";
    char    sub3[] = "teres\0bb";



    printf("FT: %s\nREAL: %s\n\n", ft_strnstr(s, sub, 20), strnstr(s, sub, 20));
    printf("FT: %s\nREAL: %s\n\n", ft_strnstr(s, sub2, 20), strnstr(s, sub2, 20));
    printf("FT: %s\nREAL: %s\n\n------\n", ft_strnstr(s, sub, 5), strnstr(s, sub, 5));
    
    printf("FT: %s\nREAL: %s\n\n", ft_strnstr(s, sub1, 20), strnstr(s, sub1, 20));
    printf("FT: %s\nREAL: %s\n\n", ft_strnstr(s, sub3, 20), strnstr(s, sub3, 20));
}*/