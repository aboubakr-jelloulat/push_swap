/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:08:41 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/02 10:48:14 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	fail_push_swap(char *content, int status)
{
	ft_putstr_fd(RED, 2);
	ft_putendl_fd(content, 2);
	exit (status);
}
static bool	is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	print_stack_tesssssssssssssst(t_stack *head)
{
	t_stack *cur = head;

	printf(YELLOW "\n ********* Stack data: ************** \n");
	while (cur != NULL)
	{
		printf("%d \n", cur->data);
		cur = cur->next;
	}
	printf(RESET "\n");
}

int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**new;

	a = NULL;
	b = NULL;
	if (ac == 1)
		fail_push_swap("Error: No arguments provided", 1);
	if (ac >= 2)
		new = parsing_args(ac - 1, av + 1);
	if (!new)
	 	fail_push_swap("Error: Parsing failed", 1);
	int u = 0;
	printf(YELLOW "\n ********* print 2D *********** \n\n");
	while (new[u])
	{
		printf ("%s\n", new[u]);
		u++;
	}
	stack_init(&a, new);
	if (!is_sorted(a))
	
		printf("\n%sNot sorted%s\n", RED, RESET);
	else
		printf("\n%sSorteed%s\n", GREEN, RESET);
		
	return (0);
}
