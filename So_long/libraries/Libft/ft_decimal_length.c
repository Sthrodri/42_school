/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_length.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthrodri <sthrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:52:55 by sthrodri          #+#    #+#             */
/*   Updated: 2024/12/14 17:52:55 by sthrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_decimal_length(long int nbr)
{
	int	length;

	length = 0;
	if (nbr <= 0)
		length++;
	while (nbr)
	{
		nbr /= 10;
		length++;
	}
	return (length);
}
