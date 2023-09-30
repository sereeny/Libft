/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:11:40 by ssandova          #+#    #+#             */
/*   Updated: 2023/09/30 19:16:18 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	i;
	size_t	j;

	dlen = ft_strlen(dst);
	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while ((i + j + 1) < dstsize && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	if ((i + j + 1) <= dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*int main() 
{  
	char dst[10] = "hola ";
    char dst2[10] = "hola ";
	char src[] = "mundo";

	ft_strlcat(dst, src, 8);
	strlcat(dst2, src, 8);
	printf("%s\n", dst);
	printf("%s", dst2);
	return (0);
}*/
