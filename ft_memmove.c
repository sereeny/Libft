/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:46:49 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/07 13:11:52 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memmove() function copies n bytes from memory area src to memory area 
dest. The memory areas may overlap: copying takes place as though the bytes 
in src are first copied into a temporary array that does not overlap src or
dest, and the bytes are then copied from the temporary array to dest.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if ((d == NULL) || (s == NULL))
		return (NULL);
	if (d > s)
	{
		while (len--)
		d[len] = s[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
