/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:11 by matavare          #+#    #+#             */
/*   Updated: 2022/10/31 16:08:17 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s) - 1;
	if (s[l + 1] == c)
		return ((char *)s + (l + 1));
	while (s[l] != 0)
	{
		if (s[l] == c)
			return ((char *)s + l);
		l--;
	}
	return (NULL);
}

/*
int main()
{
    char s[] = "amanha vai chover";
    int c1 = 'm';
    int c2 = 'h';
    int c3 = 'z';
    int c4 = '\0';
    int c6 = ' ';
    
    printf("c1\nFT: %s\n", ft_strrchr(s, c1));
    printf("REAL: %s\n\n", strrchr(s, c1));

    printf("c2\nFT: %s\n", ft_strrchr(s, c2));
    printf("REAL: %s\n\n", strrchr(s, c2));

    printf("c3\nFT: %s\n", ft_strrchr(s, c3));
    printf("REAL: %s\n\n", strrchr(s, c3));
    
    printf("c4\nFT: %s\n", ft_strrchr(s, c4));
    printf("REAL: %s\n\n", strrchr(s, c4));
    
    printf("c5\nFT: %s\n", ft_strrchr(s, c6));
    printf("REAL: %s\n", strrchr(s, c6));
}*/