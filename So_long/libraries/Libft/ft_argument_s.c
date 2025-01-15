/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthrodri <sthrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:34:14 by sthrodri          #+#    #+#             */
/*   Updated: 2024/12/12 17:34:14 by sthrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_argument_s(char *str)
{
	if (str == NULL)
		return (write(1, "(null)", sizeof(char) * 6));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
