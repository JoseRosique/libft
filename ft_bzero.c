/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:15:21 by joslopez          #+#    #+#             */
/*   Updated: 2022/04/21 17:16:47 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* ¿ Por qué se declara vacío str y despues se le asigna unsigned char * ? */
void	ft_bzero(void *str, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n)
	{
		p[--n] = 0;
	}
}
