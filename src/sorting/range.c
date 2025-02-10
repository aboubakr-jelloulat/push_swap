/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:18:05 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/10 11:36:34 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	range(t_stack **a, t_stack **b, int end)
{
	int	start;

	start = 0;
	while (*a)
	{
		if ((*a)->index >= start && (*a)->index <= end) // west
		{
			pb(a, b);
			start++;
			end++;
		}
		else if ((*a)->index < start) // 9al
		{
			pb(a, b);
			rb(b);
			start++;
			end++;
		}
		else // kbaar
			ra(a);
	}
}
