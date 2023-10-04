/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:32:43 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/04 20:21:39 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mptr;
	int		i_beg;
	int		i_end;
	size_t	len;

	i_beg = 0;
	i_end = ft_strlen(s1) - 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i_beg] != '\0' && ft_strchr(set, s1[i_beg]))
		i_beg++;
	while (s1 && ft_strrchr(set, s1[i_end]))
		i_end--;
	len = i_beg - i_end + 1;
	if (i_beg < i_end)
		len = 0;
	mptr = (char *)

	return (mptr);
}
