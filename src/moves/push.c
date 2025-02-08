/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:56:37 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/05 17:29:33 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	add_front(t_stack **head, int data) // noo
{
	t_stack	*new;

	new = lstnew(data);
	if (!new)
		return ;
	if (!*head)
		*head =  new;
	else
	{
		new->next = *head;
		(*head) = new;
	}
}

bool	push(t_stack **from, t_stack **to)
{
	t_stack	*st;

	if (!from || !*from || !to)
		return (false);
	st = *from;
	*from = st->next;
	st->next = *to;
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

