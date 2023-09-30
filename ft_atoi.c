/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:09:54 by ssandova          #+#    #+#             */
/*   Updated: 2023/09/30 20:03:21 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32) //white spaces
		i++;
	while (str[i] == 43 || str[i] == 45) // + -
	{
		if (str[i + 1] >= 9 && str[i + 1] <= 13 || str[i + 1] == 32)
			return (0);
		i++;
	}	
	while (str[i] >= 48 && str[i] <= 57) //numeros
	{
		if (str[i + 1] >= 9 && str[i + 1] <= 13 || str[i + 1] == 32)
			return (0);
		if (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
			return (0);
		i++;
	}
}
