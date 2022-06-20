/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:34:57 by joslopez          #+#    #+#             */
/*   Updated: 2022/04/20 12:00:38 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!*str && !str)
	{
		return (NULL);
	}
	if (*str == (char)c)
	{
		return ((char *)str);
	}
	while (*str++)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
	}
	return (NULL);
}
