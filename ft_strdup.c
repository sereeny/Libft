/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:32:29 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/02 20:01:21 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pun;
	char	*punpun;

	pun = (char *)s1;
	punpun = (char *)malloc(ft_strlen(s1) + 1);
	if (pun == 0)
		return (0);
	ft_strlcpy(punpun, pun, ft_strlen(s1) + 1);
	return (punpun);
}
