/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:32:29 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/07 13:13:59 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it. The pointer may subsequently be 
used as an argument to the function free(3). If insufficient memory is 
available, NULL is returned and errno is set to ENOMEM.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	char	*ret;

	s1_cpy = (char *)s1;
	ret = (char *)malloc(ft_strlen(s1) + 1);
	if (s1_cpy == 0)
		return (0);
	ft_strlcpy(ret, s1_cpy, ft_strlen(s1) + 1);
	return (ret);
}
