/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:08:41 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/08 11:36:19 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	fail_push_swap(char *content, int status)
{
	ft_putstr_fd(RED, 2);
	ft_putendl_fd(content, 2);
	exit (status);
}
int	lstsize(t_stack	*head)
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

static bool	is_sorted(t_stack *stack)
{
	if (lstsize(stack) < 2)
	{
		fail(&stack, "Only one number in stack", 1);
	}
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (false);
		stack = stack->next;
	}
	return (true);
}


#define BLUE    "\033[1;34m"

void print_stack_A(t_stack *stack)
{
    printf(RED "Stack A: " RESET);
    while (stack)
    {
        printf(BLUE "\n[%d] " RESET, stack->data);
        stack = stack->next;
    }
    printf("\n");
}

void print_stack_B(t_stack *stack)
{
    printf( RED "Stack B: " RESET);
    while (stack)
    {
        printf(GREEN "\n[%d] " RESET, stack->data);
        stack = stack->next;
    }
    printf("\n");
}

void foo()
{
	system("leaks -q push_swap");
}

int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**new = NULL;

	a = NULL;
	b = NULL;
	atexit(foo);
	if (ac == 1)
		fail_push_swap("Error: No arguments provided", 1);
	if (ac >= 2)
		new = parsing_args(ac - 1, av + 1);
	if (!new)
	 	fail_push_swap("Error: Parsing failed", 1);
	int u;
	u = 0;
	//printf(YELLOW "\n ********* print 2D *********** \n\n");
	// while (new[u])
	// {
	// 	printf ("%s\n", new[u]);
	// 	u++;
	// }
	stack_init(&a, new);
	if (is_sorted(a))
		fail(&a, "Stack is sorted", 1);
	printf(YELLOW "\n movment :  \n\n");
	algorithme(&a, &b);
	print_stack_A(a);
	print_stack_B(b);
	
	// 	printf("\n%sNot sorted%s\n", RED, RESET);
	// else
	// 	printf("\n%sSorteed%s\n", GREEN, RESET);
		
	return (0);
}
