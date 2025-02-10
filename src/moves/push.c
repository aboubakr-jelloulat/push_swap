/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:56:37 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/10 11:04:54 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	push(t_stack **from, t_stack **to)
{
	t_stack	*st;

	if (!from || !*from || !to)
		return (false);
	st = *from;
	*from = st->next;
	st->next = *to; // st still points to 12 hna kandiro link i3ni st-> link _to b mab9atchi m3a head 
	*to = st;
	return (true);
}

bool	pa(t_stack **a, t_stack **b)
{
	if (!push(b, a))
		return (false);
	ft_putendl_fd("pa", 1);
	return (true);
}

bool	pb(t_stack **a, t_stack **b)
{
	if (!push(a, b))
		return (false);
	ft_putendl_fd("pb", 1);
	return (true);
}
