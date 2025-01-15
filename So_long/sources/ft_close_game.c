/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthrodri <sthrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:36:51 by sthrodri          #+#    #+#             */
/*   Updated: 2024/12/15 14:36:51 by sthrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_victory(t_game *game);
int	ft_close_game(t_game *game);
int	ft_error_msg(char *message, t_game *game);

int	ft_victory(t_game *game)
{
	ft_printf("\n			Movements: %d\n", ++game->movements);
	ft_free_all_allocated_memory(game);
	ft_printf("Parabens vc ganhou!!!");
	exit (EXIT_SUCCESS);
}

int	ft_close_game(t_game *game)
{
	ft_printf("Movements: %d\n", game->movements);
	ft_free_all_allocated_memory(game);
	ft_printf("CLOSED\n");
	exit (EXIT_FAILURE);
}

int	ft_error_msg(char *message, t_game *game)
{
	if (game->map_alloc == true)
		ft_free_map(game);
	free(game);
	ft_printf("Error\n""%s\n", message);
	exit (EXIT_FAILURE);
}
