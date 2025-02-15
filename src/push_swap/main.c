/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:08:41 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/15 18:20:55 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"



void print_stack(t_stack	*head)
{
	ft_putstr_fd(RED, 1);
	ft_putendl_fd("Print stack : ", 1);

	while (head)
	{
		printf ("%s value A :  %d\n", GREEN, head->data);
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
	if (ac == 1)
		exit(0);
	if (ac >= 2)
		new = parsing_args(ac - 1, av + 1);
	if (!new)
		return (0);
	stack_init(&a, new);
	free_2d(new);
	if (is_sorted(a, mandatory))
		exit (0);
	algorithme(&a, &b);
	print_stack(a);
	ft_putendl_fd(YELLOW, 1);
	print_stack(b);
	free_stack(&a);
	return (0);
}
