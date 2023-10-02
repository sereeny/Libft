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

#include "libft.h";
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
  int i;
  int res;
  int sign;
  
  i = 0;
  res = 0;
  sign = 1;
  if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    i++;
 
  if (str[i] == 43 || str[i] == 45)
  {
    if (str[i] == 45)
    {
    sign = -1;
    i++;
    } 
  }
  while (ft_isdigit(str[i]))
 {
   i++;
   if (str[i + 1] == '\0')
    {
     while (ft_isdigit)
     {
        res = res * 10 + str[i] - '0';
        i--;
      }
      return (res * sign);
   }
return ('\0');
}


int main() 
{
  char str[] = " +4652";
  
  printf("%d", ft_atoi(str));
  printf("%d", atoi(str));
  return 0;
}
}
