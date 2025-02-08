/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:49:37 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/08 10:03:23 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

# include <stdio.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"


typedef struct s_stack
{
	struct s_stack	*next;
	int				data;
	int				index;
}					t_stack;



void	fail_push_swap(char *content, int status);
char	**parsing_args(int ac, char **av);
void	free_2d(char **str);
void	free_stack(t_stack **stack);
void	fail(t_stack **a, char *content, int status);
void	stack_init(t_stack **a, char **args);
void	push_back(t_stack **head, int data);
t_stack	*lstnew(int content);
void	add_front(t_stack **head, int data);
t_stack	*iteration(t_stack *head);
int		lstsize(t_stack	*head);
void	assigning_indexes(t_stack **stack, int len);


bool	pa(t_stack **a, t_stack **b);
bool	pb(t_stack **a, t_stack **b);

bool	sa(t_stack **a);
bool	sb(t_stack **b);
bool	ss(t_stack **a, t_stack **b);

bool	ra(t_stack **a);
bool	rb(t_stack **b);
bool	rr(t_stack **a, t_stack **b);

bool	rra(t_stack **a);
bool	rrb(t_stack **b);
bool	rrr(t_stack **a, t_stack **b);


void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
void	shift_min_to_front(t_stack **a);
void	sort_five(t_stack **a, t_stack **b);

void	range(t_stack **a, t_stack **b);
void	algorithme(t_stack **a, t_stack **b);

#endif