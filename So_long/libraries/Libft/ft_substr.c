/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthrodri <sthrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:01:42 by sthrodri          #+#    #+#             */
/*   Updated: 2024/12/14 18:01:42 by sthrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_length;
	char	*substr;

	if (!s)
		return (NULL);
	substr_length = ft_strlen(s) - start;
	if (ft_strlen(s) > start)
	{
		if (substr_length > len)
			substr = (char *) ft_calloc(len + 1, sizeof(char));
		else
			substr = (char *) ft_calloc(substr_length + 1, sizeof(char));
		if (!substr)
			return (NULL);
		ft_strlcpy(substr, &s[start], len + 1);
	}
	else
		substr = (char *) ft_calloc(1, sizeof(char));
	return (substr);
}
