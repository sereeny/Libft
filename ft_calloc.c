/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:27:50 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/02 19:11:04 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pun;

	pun = malloc(size * count);
	if (pun == 0)
		return (0);
	ft_bzero(pun, count * size);
	return (pun);
}
