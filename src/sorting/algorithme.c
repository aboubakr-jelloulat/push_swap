/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 10:40:37 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/08 11:32:51 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void sorting(t_stack **a, t_stack **b)
{
	int len;

	len = lstsize(*a);
	assigning_indexes(a, len);
	if (len == 2)
		sa(a);
	if (len == 3)
		sort_three(a);
	if (len == 4)
		sort_four(a, b);
	if (len == 5)
		sort_five(a, b);
	else
		range(a, b);
}

static int get_max_idx_at_b(t_stack *b)
{
	int i;
	int max;
	int tmp;

	i = 0;
	max = 0;
	tmp = b->data;
	while (b)
	{
		if (tmp < b->data)
		{
			max = i;
			tmp = b->data;
		}
		i++;
		b = b->next;
	}
	return (max);
}

static void pushing_back_to_a(t_stack **a, t_stack **b)
{
	int max_idx;
	int half_size;
	
	while (*b)
	{
		half_size = lstsize(*b) / 2;
		max_idx = get_max_idx_at_b(*b);
		if (max_idx == 0)
		{
			pa(a, b);
		}
		else if (max_idx > half_size)
		{
			rrb(b);
		}
		else
		{
			rb(b);
		}
	}
}

void algorithme(t_stack **a, t_stack **b)
{
	sorting(a, b);
	pushing_back_to_a(a, b);
}
