/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:27:34 by jverdu-r          #+#    #+#             */
/*   Updated: 2022/12/22 16:27:38 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

float	ft_abs(float n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_ipart(float n)
{
	return ((int)n);
}

float	ft_fpart(float n)
{
	if (n > 0.f)
		return (n - ft_ipart(n));
	return (n - (ft_ipart(n) + 1.f));
}

float	ft_rfpart(float n)
{
	return (1.f - ft_fpart(n));
}
