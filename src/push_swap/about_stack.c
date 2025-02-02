/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   about_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:48:18 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/02 10:58:19 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*lstnew(int content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = content;
	node->index = 0;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	push_back(t_stack **head, int data)
{
	t_stack	*new_node;
	t_stack	*cur;

	if (!head)
		return ;
	new_node = lstnew(data);
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		cur = *head;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = new_node;
		new_node->prev = cur;
	}
}
