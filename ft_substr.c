/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:07:41 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/02 20:54:42 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *pun;
    char    *pun1;

    pun = (char *)malloc(len + 1);
    pun1 = (char *)s;
    if (pun == 0)
        return (0);
    while (len > 0)
    {
        *pun = pun1[start];
        len--;
        start++;
        pun++;
    }
    if (len == 0)
    {
      *pun = '\0';
    }
    return (pun);
}
