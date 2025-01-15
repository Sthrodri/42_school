/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthrodri <sthrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:52:20 by sthrodri          #+#    #+#             */
/*   Updated: 2024/12/14 17:52:20 by sthrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbr_elements, size_t element_size)
{
	void	*ptr;

	ptr = malloc(nbr_elements * element_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nbr_elements * element_size);
	return (ptr);
}
