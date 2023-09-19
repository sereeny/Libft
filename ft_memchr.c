/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:37:35 by ssandova          #+#    #+#             */
/*   Updated: 2023/09/19 19:06:14 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while ((unsigned char *)&s[i] && i < n)
    {
        if (((unsigned char *)&s[i] == (unsigned char) c))
            return ((void *)&s[i]);
        i++;
    }
    return ('\0');
}