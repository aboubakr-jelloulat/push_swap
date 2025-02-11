/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:26:16 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/11 12:26:03 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	error(void)
{
	ft_putendl_fd("Error", 2);
	exit(1);
}

static int	is_exist(char *name)
{
	return (!(ft_strncmp(name, "sa\n", 3) || ft_strncmp(name, "sb\n", 3)
			|| ft_strncmp(name, "ss\n", 3) || ft_strncmp(name, "pa\n", 3)
			|| ft_strncmp(name, "pb\n", 3) || ft_strncmp(name, "ra\n", 3)
			|| ft_strncmp(name, "rb\n", 3) || ft_strncmp(name, "rr\n", 3)
			|| ft_strncmp(name, "rra\n", 4) || ft_strncmp(name, "rrb\n", 4)
			|| ft_strncmp(name, "rrr\n", 4)));
}

static void	execute_instructions(t_stack **a, t_stack **b, char *move)
{
	if (ft_strncmp(move, "sa\n", 3) || ft_strncmp(move, "ss\n", 3))
		swap(a);
	if (ft_strncmp(move, "sb\n", 3) || ft_strncmp(move, "ss\n", 3))
		swap(b);
	if (ft_strncmp(move, "pa\n", 3))
		push(a, b);
	if (ft_strncmp(move, "pb\n", 3))
		push(b, a);
	if (ft_strncmp(move, "ra\n", 3) || ft_strncmp(move, "rr\n", 3))
		rotate(a);
	if (ft_strncmp(move, "rb\n", 3) || ft_strncmp(move, "rr\n", 3))
		rotate(b);
	if (ft_strncmp(move, "rra\n", 4) || ft_strncmp(move, "rrr\n", 4))
		reverse_rotate(a);
	if (ft_strncmp(move, "rrb\n", 4) || ft_strncmp(move, "rrr\n", 4))
		reverse_rotate(b);
}

static void	read_instructions(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!is_exist(line))
		{
			execute_instructions(a, b, line);
		}
		else
		{
			free(line);
			free_stack(a);
			free_stack(b);
			error();
		}
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted(*a, bonus) && !*b)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}

void	foo()
{
	system("leaks -q checker");
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
		fail_push_swap("Error", 1);
	if (ac >= 2)
		new = parsing_args(ac - 1, av + 1);
	if (!new)
		return 0;
	stack_init(&a, new);
	free_2d(new);
	read_instructions(&a, &b);
	free_stack(&b);
	free_stack(&a);
	return (0);
}
