/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:08:41 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/12 12:15:30 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// void foo()
// {
// 	system ("leaks -q push_swap");
// }


void print_stack(t_stack *head)
{
	printf ("Stack : \n");
	while (head)
	{
		printf ("%d\n", head->data);
		head = head->next;
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**new;

	a = NULL;
	b = NULL;
	new = NULL;
	// atexit(foo);
	if (ac == 1)
		exit(1);
	if (ac >= 2)
		new = parsing_args(ac - 1, av + 1);
	if (!new)
		return (0);
	stack_init(&a, new);
	free_2d(new);
	if (is_sorted(a, mandatory))
		exit(1);
	algorithme(&a, &b);
	printf ("stack a : \n");
	print_stack(a);
	printf ("stack b : \n");
	print_stack(b);
	free_stack(&a);
	return (0);
}
