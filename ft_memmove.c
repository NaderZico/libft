/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhalil <nakhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:00 by nakhalil          #+#    #+#             */
/*   Updated: 2024/12/30 17:05:25 by nakhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;

	printf("Source address: %p\n", src);
	printf("Dest address: %p\n", dst);
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
 

// int	main(void)
// {
// 	char src[14] = "Hello, world!";
// 	char *dst = src + 4;

// 	// printf("Source address: %p\n", src);
// 	// printf("Dest address: %p\n", dst);

// 	printf("Source string: %s\n", src);
// 	printf("Dest string: %s\n", dst);
	
// 	ft_memmove(dst, src, 5);

// 	// printf("Source string: %s\n", src);
// 	// printf("Dest string: %s\n", dst);

// 	// dst[13] = '\0';

// 	// printf("Source: %s\n", src);
// 	// printf("Destination: %s", dst);

// 	return (0);
// }

// src = 0x123
// dst = 0x123