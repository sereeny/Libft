/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:00:06 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/09 20:28:08 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Utilizando malloc(3), genera una string que represente el valor entero 
recibido como argumento. Los números negativos tienen que gestionarse.*/

#include "libft.h"

char	*ft_strrev(char *str)
{
	int 	i;
	int 	j;
	char	temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		i;

	i = 0;
	if (n == NULL)
		return (NULL);
	nbr = malloc(12);
	if (nbr == 0)
		return (NULL);
	while (n > 9)
	{
		nbr[i] = n % 10;
		n = n / 10;
	}
	if (n < 10)
		nbr[i] = n + '0';
}
