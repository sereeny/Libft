/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:04:23 by ssandova          #+#    #+#             */
/*   Updated: 2023/09/19 19:54:53 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
        {
            if ((unsigned char) s1[i] == (unsigned char) s2[i])
                i++;
            else if ((unsigned char) s1[i] < (unsigned char) s2[i])
                return (-1);
            else if ((unsigned char) s1[i] > (unsigned char) s2[i])
                return (1);
        }
        return (0);
}