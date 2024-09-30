/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:39:49 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/07 18:04:10 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* To each char in string 's', apply the function 'f' giving as parameters the
index of each char in 's' and its address that could be modified if necessary.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
