/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 10:40:37 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/15 18:45:45 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	sorting(t_stack **a, t_stack **b)
{
	int	len;

	len = lstsize(*a);
	assigning_indexes(a, len);
	if (len == 2)
		sa(a);
	else if (len == 3)
		sort_three(a);
	else if (len == 4)
		sort_four(a, b);
	else if (len == 5)
		sort_five(a, b);
	else if (len <= 100)
		range(a, b, 15);
	else if (len > 100 && len <= 500)
		range(a, b, 35);
	else
		range(a, b, 45);
}

static int	get_position(t_stack *b, int max_idx)
{
	int	pos;

	pos = 0;
	while (b)
	{
		if (b->index == max_idx)
			return (pos);
		pos++;
		b = b->next;
	}
	return (-1);
}

static void	pushing_back_to_a(t_stack **a, t_stack **b)
{
	int	max_idx;
	int	half_size;
	int	pos;

	while (*b)
	{
		max_idx = lstsize(*b) - 1;
		half_size = lstsize(*b) / 2;
		pos = get_position(*b, max_idx);
		if ((*b)->index == max_idx)
		{
			pa(a, b);
		}
		else if (pos > half_size)
		{
			rrb(b);
		}
		else
			rb(b);
	}
}


void	algorithme(t_stack **a, t_stack **b)
{
	sorting(a, b);
	pushing_back_to_a(a, b);
}
