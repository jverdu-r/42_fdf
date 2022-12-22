/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:51:56 by jverdu-r          #+#    #+#             */
/*   Updated: 2022/09/01 16:16:04 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (lst)
	{
		while (temp->next != NULL)
			temp = temp->next;
	}
	return (temp);
}
