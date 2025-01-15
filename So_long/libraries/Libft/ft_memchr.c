/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthrodri <sthrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:57:28 by sthrodri          #+#    #+#             */
/*   Updated: 2024/12/14 17:57:28 by sthrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int argument, size_t size)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *) str;
	while (i < size)
	{
		if (*(s + i) == (unsigned char) argument)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
