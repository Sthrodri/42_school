/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_occurrences.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthrodri <sthrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:52:31 by sthrodri          #+#    #+#             */
/*   Updated: 2024/12/14 17:52:31 by sthrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_occurrences(char *str, char c)
{
	int	occurrences;
	int	i;

	i = 0;
	occurrences = 0;
	while (str[i])
	{
		if (str[i] == c)
			occurrences++;
		i++;
	}
	return (occurrences);
}
