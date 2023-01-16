/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:28:19 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/01/16 13:03:06 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

int	ft_close_win(void *params)
{
	t_fdf	*env;
	int		x;
	int		y;

	env = (t_fdf *)params;
	mlx_destroy_image(env->mlx, env->img);
	mlx_destroy_window(env->mlx, env->win);
	free(env->camera);
	free(env->mouse);
	y = -1;
	while (++y < env->map->height)
	{
		x = -1;
		while (++x < env->map->width)
			free(env->map->array[y][x]);
		free(env->map->array[y]);
	}
	free(env->map->array);
	free(env->map);
	free(env->title);
	free(env);
	exit(0);
}

void	ft_hook_controls(t_fdf *env)
{
	mlx_hook(env->win, 2, 0, ft_key_press, env);
}

double	ft_reset_angles(double angle)
{
	if (angle >= M_PI)
		return (-2 * M_PI - angle);
	else if (angle <= -M_PI)
		return (2 * M_PI + angle);
	return (angle);
}
