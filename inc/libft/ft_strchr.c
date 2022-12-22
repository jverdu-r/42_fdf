/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:26:55 by jverdu-r          #+#    #+#             */
/*   Updated: 2022/08/23 18:22:36 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	len;

	if (!str)
		return (NULL);
	len = ft_strlen((char *)str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return (&((char *)str)[len]);
		len--;
	}
	return (NULL);
}
