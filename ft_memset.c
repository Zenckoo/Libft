/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:07:27 by isitbon           #+#    #+#             */
/*   Updated: 2022/11/04 18:41:21 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	size_t	index;
	char	*str;

	str = (char *)b;
	index = 0;
	while (index < len)
	{
		str[index] = c;
		index++;
	}
	return (str);
}
