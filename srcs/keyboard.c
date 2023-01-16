/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:28:27 by jverdu-r          #+#    #+#             */
/*   Updated: 2022/12/22 16:28:32 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

int	ft_key_press(int keycode, void *params)
{
	t_fdf	*env;

	env = (t_fdf *)params;
	if (keycode == ESCAPE)
		ft_close_win(env);
	ft_draw(env->map, env);
	return (0);
}
