/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:59:26 by lmaes             #+#    #+#             */
/*   Updated: 2024/04/22 11:07:32 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const char			*str;

	i = 0;
	str = (const char *)s;
	while ((i < n))
	{
		if (str[i] == (char)c)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}
