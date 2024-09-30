/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:09:28 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/07 17:36:44 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function f to each character of the string s to create a new 
string (with malloc(3)) resulting from successive applications of f.*/

#include "../../inc/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		ptr[i] = f((unsigned int)i, (char)s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
