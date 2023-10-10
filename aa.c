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

	count = 0;
	while (n != 0) 
	{
		n /= 10;
		count++;
	}
	return (count);
}
static int	ft_buffer(int n)
{
	if n 
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		len;
	int		i;

	i = 0;
	if (n == NULL)
		return (NULL);
	if (n = 0)
		buffer = malloc(1 + 1);
		len = 1;
	if (n > 0)
		buffer = malloc(count_digits(n) + 1);
		len = count_digits(n);
	if (n < 0)
		buffer = malloc(count_digits(n) + 2);
		len = count_digits(n);
	if (buffer == NULL)
		return (NULL);
	
}
