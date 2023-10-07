/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:07:41 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/07 13:22:50 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La 
substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pun;

	if (s == NULL)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	pun = (char *)malloc((sizeof(char) * len + 1));
	if (pun == NULL)
		return (NULL);
	ft_strlcpy(pun, s + start, len + 1);
	return (pun);
}
