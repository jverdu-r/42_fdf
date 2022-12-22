/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:45:41 by jverdu-r          #+#    #+#             */
/*   Updated: 2022/09/01 16:17:14 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int		len;
	t_list	*temp;

	len = 0;
	temp = list;
	if (!list)
		return (0);
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
