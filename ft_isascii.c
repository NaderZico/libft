/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhalil <nakhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:52:49 by nakhalil          #+#    #+#             */
/*   Updated: 2024/12/24 17:10:47 by nakhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
	{
		return (1);
	}
	return (0);
}
