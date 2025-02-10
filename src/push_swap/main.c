/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:08:41 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/10 20:08:19 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	fail_push_swap(char *content, int status)
{
	ft_putstr_fd(RED, 2);
	ft_putendl_fd(content, 2);
	exit(status);
}

int	lstsize(t_stack *head)
{
	int	counter;

	if (!head)
		return (0);
	counter = 0;
	while (head)
	{
		counter++;
		head = head->next;
	}
	return (counter);
}

static	bool	is_sorted(t_stack *stack)
{
	if (lstsize(stack) < 2)
	{
		fail(&stack, "Only one number in stack", 1); // error walo ri exit 0 
	}
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void foo()
{
	system("leaks -q push_swap");
}

void print_stack(t_stack	*head)
{
	printf ("stack A : \n");
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
	atexit(foo);
	if (ac == 1)
		fail_push_swap("Error: No arguments provided", 1);
	if (ac >= 2)
		new = parsing_args(ac - 1, av + 1);
	if (!new)
		fail_push_swap("Error: Parsing failed", 1);
	stack_init(&a, new);
	if (is_sorted(a))
		fail(&a, "Stack is sorted", 1);
	algorithme(&a, &b);
	free_2d(new);
	print_stack(a);
	free_stack(&a);
	return (0);
}
