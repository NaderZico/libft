/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhalil <nakhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 14:10:59 by nakhalil          #+#    #+#             */
/*   Updated: 2024/12/26 11:43:22 by nakhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*str;
	unsigned int	nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	i = n_len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[0] = '0';
	while (nb != 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int	main(void)
// {
// 	printf("0 -> %s\n", ft_itoa(-1));
// 	printf("12345 -> %s\n", ft_itoa(12345));
// 	printf("-12345 -> %s\n", ft_itoa(-12345));
// 	printf("-2147483648 -> %s\n", ft_itoa(-2147483648));
// 	printf("2147483647 -> %s\n", ft_itoa(2147483647));
// 	return (0);
// }