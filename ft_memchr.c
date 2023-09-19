/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:37:35 by ssandova          #+#    #+#             */
/*   Updated: 2023/09/16 20:23:17 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (s[i] && i < n)
    {
        if ((unsigned char) s[i] == (unsigned char) c)
            return ((void *)&s[i]);
        i++;
    }
    return ('\0');
}