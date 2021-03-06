/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:51:11 by ncella            #+#    #+#             */
/*   Updated: 2017/11/07 18:51:13 by ncella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int caracter, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char*)str)[i] = caracter;
		i++;
	}
	return (str);
}
