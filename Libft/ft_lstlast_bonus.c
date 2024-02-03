/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-l <dgomez-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:18:00 by dgomez-l          #+#    #+#             */
/*   Updated: 2024/01/24 13:18:01 by dgomez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst2;

	lst2 = lst;
	if (lst2 == 0)
		return (lst2);
	while (lst2->next != 0)
		lst2 = lst2->next;
	return (lst2);
}
