/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:03:23 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/04 11:47:40 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*byte;

	byte = (unsigned char *)s;
	while (n--)
	{
		if (*byte == (unsigned char)c)
			return ((void *)byte);
		byte++;
	}
	return (NULL);
}
