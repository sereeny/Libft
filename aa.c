/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:52:20 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/09 20:27:59 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_digits(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count++;
	while (n != 0) 
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		len;
	int		i;

	if (n == NULL)
		return (NULL);
	len = count_digits(n);		
	if (n = 0)
	{
		len = 2;
		buffer = (char *)malloc(len);
	}
	i = len - 1;
	buffer = (char *)malloc(len);
	if (buffer == NULL)
		return (NULL);
	if (n < 0)
		buffer[i] = '-';
	while (str[i])
}
