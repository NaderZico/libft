/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhalil <nakhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:35:38 by nakhalil          #+#    #+#             */
/*   Updated: 2024/12/30 17:05:59 by nakhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			printf("Successfully found '%p'\n", (void *)(p + i));
			return ((void *)(p + i));
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[] = "Hello, world!";
// 	char c = 'o';
// 	char *result = ft_memchr(str, c, 13);
// 	if (result)
// 	{
// 		printf("Successfully found '%p'", result);
// 	}
// 	else
// 	{
// 		printf("Failed to find '%c'", c);
// 	}
// }