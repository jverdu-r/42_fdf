/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:14:30 by jverdu-r          #+#    #+#             */
/*   Updated: 2022/10/03 16:08:19 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		a;
	int		b;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	a = 0;
	b = 0;
	if (s1)
	{
		while (s1[a] != '\0')
		{
			ptr[a] = s1[a];
			a++;
		}
	}
	while (s2[b] != '\0')
		ptr[a++] = s2[b++];
	ptr[ft_strlen(s1) + ft_strlen(s2)] = 0;
	return (ptr);
}
