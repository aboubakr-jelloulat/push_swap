/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 10:33:17 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/02 10:36:30 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	found;

	i = 0;
	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (!found)
			break ;
		i++;
	}
	return (i);
}
