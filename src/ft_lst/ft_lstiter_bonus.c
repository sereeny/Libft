/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:00:14 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/17 20:46:12 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.*/

#include "../../inc/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int		size;

	size = ft_lstsize(lst);
	while (lst != NULL || size > 0)
	{
		f(lst->content);
		lst = lst->next;
		size--;
	}
}
